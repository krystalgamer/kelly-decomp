#!/usr/bin/env python3

import argparse
import csv
import json
import struct
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
TARGET_ROM = ROOT / "SLUS_203.34.rom"
TEXT_VRAM = 0x00100000
FALSE_RETURN = 0x0000102D
TRUE_RETURN = 0x24020001
JR_RA = 0x03E00008


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


def next_pending() -> dict[str, str]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        for row in csv.DictReader(queue_file):
            if row["status"] == "pending":
                return row
    raise RuntimeError("No pending functions remain")


def predicate_value(row: dict[str, str]) -> bool:
    if row["size_bytes"] != "8":
        raise RuntimeError(f"Next function is not 8 bytes: {row['raw_name']}")
    if row["reference_file"] != "KS/SRC/entity.h":
        raise RuntimeError(
            f"Next function is not an entity.h predicate: {row['raw_name']}"
        )
    raw_name = row["raw_name"]
    if not raw_name.endswith("__C6entity"):
        raise RuntimeError(f"Next function is not const entity: {raw_name}")
    method = raw_name[: -len("__C6entity")]
    if not method.startswith(("is_", "has_", "allow_")):
        raise RuntimeError(f"Next function is not a predicate: {raw_name}")

    address = int(row["address"], 0)
    offset = address - TEXT_VRAM
    target = TARGET_ROM.read_bytes()[offset : offset + 8]
    first, second = struct.unpack("<II", target)
    if first != JR_RA:
        raise RuntimeError(f"Unexpected predicate return instruction: {raw_name}")
    if second == TRUE_RETURN:
        return True
    if second == FALSE_RETURN:
        return False
    raise RuntimeError(
        f"Unexpected predicate value instruction 0x{second:08X}: {raw_name}"
    )


def source_text(method: str, value: bool) -> str:
    literal = "true" if value else "false"
    return (
        "class entity {\n"
        "public:\n"
        f"    bool {method}() const;\n"
        "};\n\n"
        f"bool entity::{method}() const {{\n"
        f"    return {literal};\n"
        "}\n"
    )


def process_one(dry_run: bool) -> None:
    if not dry_run and run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    row = next_pending()
    value = predicate_value(row)
    method = row["raw_name"].split("__", 1)[0]
    print(
        f"{row['address']} {row['raw_name']} -> "
        f"{'true' if value else 'false'}"
    )
    if dry_run:
        return

    run(
        str(ROOT / "env" / "bin" / "python"),
        "tools/function_test.py",
        "prepare",
        row["address"],
    )
    scratch = (
        ROOT
        / "tmp"
        / "functions"
        / Path(row["notes_file"]).stem
    )
    candidate = scratch / "candidate.cpp"
    candidate.write_text(source_text(method, value), encoding="utf-8")
    run(
        str(ROOT / "env" / "bin" / "python"),
        "tools/function_test.py",
        "test",
        row["address"],
    )
    attempts = json.loads(
        (scratch / "attempts.json").read_text(encoding="utf-8")
    )
    if attempts[-1]["status"] != "matched":
        raise RuntimeError(f"Generated predicate did not match: {row['raw_name']}")

    literal = "true" if value else "false"
    attempt_note = scratch / "attempt-1" / "notes.md"
    attempt_note.write_text(
        f"The released base entity predicate returns `{literal}`. "
        "The guarded constant-return candidate matched on the first attempt.\n",
        encoding="utf-8",
    )

    source_path = (
        ROOT
        / "src"
        / row["object_id"]
        / f"{int(row['address'], 0):08X}.cpp"
    )
    source_path.parent.mkdir(parents=True, exist_ok=True)
    source_path.write_text(source_text(method, value), encoding="utf-8")

    run(str(ROOT / "env" / "bin" / "python"), "tools/elf_inventory.py")
    run(str(ROOT / "env" / "bin" / "python"), "configure.py")
    run("ninja")
    run(
        str(ROOT / "env" / "bin" / "python"),
        "tools/decomp.py",
        "finalize",
        row["address"],
        "--status",
        "matched",
        "--summary",
        (
            f"The released base entity predicate returns {literal}. "
            "The first candidate matched exactly and preserved the "
            "byte-identical integrated ROM."
        ),
    )
    run(str(ROOT / "env" / "bin" / "python"), "tools/decomp.py", "check")

    note_path = ROOT / row["notes_file"]
    run(
        "git",
        "add",
        "config/SLUS_203.34.symbol_addrs.txt",
        "notes/function_queue.csv",
        str(note_path.relative_to(ROOT)),
        str(source_path.relative_to(ROOT)),
    )
    run("git", "diff", "--cached", "--check")
    run(
        "git",
        "commit",
        "-m",
        f"decomp: match entity {method}",
        "-m",
        "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
    )
    commit = run("git", "rev-parse", "--short", "HEAD").strip()
    print(f"committed {commit}")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Match one or more trivial const entity predicates."
    )
    parser.add_argument("--count", type=int, default=1)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    if args.count < 1:
        raise SystemExit("--count must be positive")

    for _index in range(args.count):
        process_one(args.dry_run)
        if args.dry_run:
            break
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except subprocess.CalledProcessError as error:
        print(error.stdout or "", file=sys.stderr)
        raise SystemExit(error.returncode)
