#!/usr/bin/env python3

import argparse
import csv
import json
import re
import struct
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
TARGET_ROM = ROOT / "SLUS_203.34.rom"
TEXT_VRAM = 0x00100000
JR_RA = 0x03E00008
NOP = 0x00000000


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


def parse_method(row: dict[str, str]) -> tuple[str, str]:
    if row["size_bytes"] != "8":
        raise RuntimeError(f"Next function is not 8 bytes: {row['raw_name']}")
    if not row["reference_file"].startswith("KS/SRC/ks/"):
        raise RuntimeError(f"Next function is not front-end code: {row['raw_name']}")

    raw_name = row["raw_name"]
    match = re.fullmatch(r"(.+)__(\d+)([A-Za-z_][A-Za-z0-9_]*)i", raw_name)
    if match is None:
        raise RuntimeError(f"Unsupported one-int method mangling: {raw_name}")
    method, length_text, class_name = match.groups()
    if int(length_text) != len(class_name):
        raise RuntimeError(f"Class length mismatch in symbol: {raw_name}")
    if not method.startswith("On") and method != "Select":
        raise RuntimeError(f"Unsupported empty hook name: {raw_name}")

    address = int(row["address"], 0)
    offset = address - TEXT_VRAM
    first, second = struct.unpack(
        "<II",
        TARGET_ROM.read_bytes()[offset : offset + 8],
    )
    if (first, second) != (JR_RA, NOP):
        raise RuntimeError(f"Target method is not a no-op: {raw_name}")
    return method, class_name


def source_text(method: str, class_name: str) -> str:
    return (
        f"class {class_name} {{\n"
        "public:\n"
        f"    void {method}(int controller);\n"
        "};\n\n"
        f"void {class_name}::{method}(int controller) {{\n"
        "}\n"
    )


def process_one(dry_run: bool) -> None:
    if not dry_run and run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    row = next_pending()
    method, class_name = parse_method(row)
    print(f"{row['address']} {class_name}::{method}(int)")
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
    candidate.write_text(source_text(method, class_name), encoding="utf-8")
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
        raise RuntimeError(f"Generated hook did not match: {row['raw_name']}")

    (scratch / "attempt-1" / "notes.md").write_text(
        "The target and released configuration reduce this one-int front-end "
        "hook to an empty method. The guarded candidate matched on the first "
        "attempt.\n",
        encoding="utf-8",
    )

    source_path = (
        ROOT
        / "src"
        / row["object_id"]
        / f"{int(row['address'], 0):08X}.cpp"
    )
    source_path.parent.mkdir(parents=True, exist_ok=True)
    source_path.write_text(source_text(method, class_name), encoding="utf-8")

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
            f"The target and released configuration reduce "
            f"{class_name}::{method}(int) to an empty hook. "
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
        f"decomp: match {class_name} {method}",
        "-m",
        "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
    )
    commit = run("git", "rev-parse", "--short", "HEAD").strip()
    print(f"committed {commit}")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Match one or more empty one-int front-end methods."
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
