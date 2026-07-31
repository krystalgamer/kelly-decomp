#!/usr/bin/env python3

import argparse
import csv
import json
import re
import shutil
import subprocess
from pathlib import Path

from function_paths import notes_file, scratch_directory


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
RELEASED_ROOT = ROOT / "kelly-slaters-pro-surfer"
SCRATCH_ROOT = ROOT / "tmp" / "functions"
PYTHON = ROOT / "env" / "bin" / "python"


class SourceExtractionError(RuntimeError):
    pass


def run(*args: str) -> str:
    result = subprocess.run(
        args,
        cwd=ROOT,
        check=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
    )
    return result.stdout


def load_rows() -> list[dict[str, str]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return list(csv.DictReader(queue_file))


def resolve(rows: list[dict[str, str]], address: str) -> dict[str, str]:
    wanted = int(address, 0)
    for row in rows:
        if int(row["address"], 0) == wanted:
            return row
    raise RuntimeError(f"Unknown function address: {address}")


def parse_counted_name(text: str, index: int) -> str | None:
    match = re.match(r"(\d+)", text[index:])
    if match is None:
        return None
    length = int(match.group(1))
    start = index + len(match.group(1))
    return text[start:start + length]


def search_needles(raw_name: str) -> list[str]:
    if raw_name.startswith("_$_"):
        class_name = parse_counted_name(raw_name, 3)
        return [f"{class_name}::~{class_name}"] if class_name else []
    if raw_name.startswith("__"):
        class_name = parse_counted_name(raw_name, 2)
        return [f"{class_name}::{class_name}"] if class_name else []

    base = raw_name.split("__", 1)[0]
    return [f"::{base}", base]


def find_definition_start(text: str, occurrence: int) -> int:
    line_start = text.rfind("\n", 0, occurrence) + 1
    start = line_start
    for _ in range(4):
        previous_end = start - 1
        if previous_end <= 0:
            break
        previous_start = text.rfind("\n", 0, previous_end) + 1
        previous = text[previous_start:previous_end].strip()
        if (
            not previous
            or previous.startswith(("//", "/*", "*", "#"))
            or previous.endswith((";", "{", "}"))
        ):
            break
        start = previous_start
    return start


def find_body_end(text: str, opening: int) -> int:
    depth = 0
    index = opening
    state = "code"
    quote = ""
    while index < len(text):
        char = text[index]
        next_char = text[index + 1] if index + 1 < len(text) else ""
        if state == "line_comment":
            if char == "\n":
                state = "code"
        elif state == "block_comment":
            if char == "*" and next_char == "/":
                state = "code"
                index += 1
        elif state == "string":
            if char == "\\":
                index += 1
            elif char == quote:
                state = "code"
        else:
            if char == "/" and next_char == "/":
                state = "line_comment"
                index += 1
            elif char == "/" and next_char == "*":
                state = "block_comment"
                index += 1
            elif char in ('"', "'"):
                state = "string"
                quote = char
            elif char == "{":
                depth += 1
            elif char == "}":
                depth -= 1
                if depth == 0:
                    return index + 1
        index += 1
    raise RuntimeError("Unterminated function body")


def extract_definition(row: dict[str, str]) -> str:
    reference = row["reference_file"] or row["source_file"]
    source_path = RELEASED_ROOT / reference
    if not source_path.exists():
        raise SourceExtractionError(
            f"Released source is missing: {reference}"
        )
    text = source_path.read_text(encoding="utf-8", errors="ignore")

    for needle in search_needles(row["raw_name"]):
        position = 0
        while True:
            occurrence = text.find(needle, position)
            if occurrence < 0:
                break
            opening = text.find("{", occurrence)
            semicolon = text.find(";", occurrence)
            if opening >= 0 and (semicolon < 0 or opening < semicolon):
                start = find_definition_start(text, occurrence)
                try:
                    end = find_body_end(text, opening)
                except RuntimeError as error:
                    raise SourceExtractionError(
                        f"{row['raw_name']}: {error}"
                    ) from error
                return text[start:end].strip() + "\n"
            position = occurrence + len(needle)
    raise SourceExtractionError(
        f"Could not locate released definition for {row['raw_name']}"
    )


def canonical_include(row: dict[str, str]) -> str:
    reference = Path(row["reference_file"] or row["source_file"])
    header = reference.with_suffix(".h")
    if (ROOT / "src" / header).exists():
        return f'#include "{header.as_posix()}"\n\n'
    return ""


def commit_source_pending(row: dict[str, str]) -> str:
    note_path = notes_file(row)
    handoff = (
        Path("notes")
        / "source_pending"
        / f"{int(row['address'], 0):08X}.json"
    )
    run(
        "git",
        "add",
        "notes/function_queue.csv",
        str(note_path),
        str(handoff),
    )
    run("git", "diff", "--cached", "--check")
    run(
        "git",
        "commit",
        "-m",
        f"decomp: attempt {row['raw_name']}",
        "-m",
        "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
    )
    return run("git", "rev-parse", "--short", "HEAD").strip()


def process(row: dict[str, str]) -> str:
    if row["status"] != "pending":
        print(f"skip {row['address']} ({row['status']})")
        return "skipped"
    if run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    source = canonical_include(row) + extract_definition(row)
    scratch = scratch_directory(SCRATCH_ROOT, row)
    shutil.rmtree(scratch, ignore_errors=True)
    run(str(PYTHON), "tools/function_test.py", "prepare", row["address"])
    candidate = scratch / "candidate.cpp"
    candidate.write_text(source, encoding="utf-8")
    run(str(PYTHON), "tools/function_test.py", "test", row["address"])
    attempts = json.loads(
        (scratch / "attempts.json").read_text(encoding="utf-8")
    )
    attempt = attempts[-1]
    (scratch / "attempt-1" / "notes.md").write_text(
        "Attempt 1 uses the exact released function definition and the "
        "matching canonical header when available.\n",
        encoding="utf-8",
    )
    if attempt["status"] == "matched":
        print(f"{row['address']} matched; manual installation required")
        return "matched"

    run(
        str(PYTHON),
        "tools/decomp.py",
        "finalize",
        row["address"],
        "--status",
        "source_pending",
        "--summary",
        "The exact released source was attempted first. Further native "
        "C++ declaration or scheduling work remains.",
    )
    commit = commit_source_pending(row)
    print(
        f"{row['address']} {row['raw_name']} "
        f"{attempt['status']} score={attempt.get('score', 0)} "
        f"committed={commit}"
    )
    return "source_pending"


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Attempt exact released source for pending functions."
    )
    parser.add_argument("addresses", nargs="*")
    parser.add_argument(
        "--next-count",
        type=int,
        help="Process this many next pending rows in queue order.",
    )
    args = parser.parse_args()

    if args.next_count is not None:
        if args.addresses:
            raise RuntimeError(
                "Explicit addresses cannot be combined with --next-count"
            )
        if args.next_count < 1:
            raise RuntimeError("--next-count must be positive")
        completed = 0
        skipped: set[str] = set()
        while completed < args.next_count:
            rows = load_rows()
            row = next(
                (candidate for candidate in rows
                 if candidate["status"] == "pending"
                 and candidate["address"] not in skipped),
                None,
            )
            if row is None:
                break
            try:
                outcome = process(row)
            except SourceExtractionError as error:
                skipped.add(row["address"])
                print(f"blocked {row['address']} {error}")
                continue
            completed += 1
            if outcome == "matched":
                break
        return 0

    if not args.addresses:
        raise RuntimeError(
            "Provide addresses or use --next-count"
        )
    for address in args.addresses:
        rows = load_rows()
        if process(resolve(rows, address)) == "matched":
            break
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
