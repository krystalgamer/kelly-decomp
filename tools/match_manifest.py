#!/usr/bin/env python3

import argparse
import csv
import json
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
PYTHON = ROOT / "env" / "bin" / "python"


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


def queue_rows() -> list[dict[str, str]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return list(csv.DictReader(queue_file))


def next_pending(rows: list[dict[str, str]]) -> dict[str, str]:
    for row in rows:
        if row["status"] == "pending":
            return row
    raise RuntimeError("No pending functions remain")


def process_entry(entry: dict[str, str], dry_run: bool) -> None:
    rows = queue_rows()
    by_address = {row["address"].lower(): row for row in rows}
    address = entry["address"].lower()
    if address not in by_address:
        raise RuntimeError(f"Manifest address is not in the queue: {address}")
    row = by_address[address]
    if row["status"] != "pending":
        print(f"skip {row['address']} {row['raw_name']} ({row['status']})")
        return

    pending = next_pending(rows)
    if pending["address"].lower() != address:
        raise RuntimeError(
            f"Manifest expects {row['address']} {row['raw_name']}, "
            f"but the next pending function is "
            f"{pending['address']} {pending['raw_name']}"
        )
    print(f"{row['address']} {row['raw_name']}")
    if dry_run:
        return
    if run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    run(str(PYTHON), "tools/function_test.py", "prepare", row["address"])
    scratch = ROOT / "tmp" / "functions" / Path(row["notes_file"]).stem
    candidate = scratch / "candidate.cpp"
    source = entry["source"]
    if not source.endswith("\n"):
        source += "\n"
    candidate.write_text(source, encoding="utf-8")
    run(str(PYTHON), "tools/function_test.py", "test", row["address"])

    attempts = json.loads(
        (scratch / "attempts.json").read_text(encoding="utf-8")
    )
    attempt = attempts[-1]
    if attempt["status"] != "matched":
        raise RuntimeError(
            f"Manifest candidate did not match {row['raw_name']}: "
            f"{attempt['score']:.2f}%"
        )
    (scratch / f"attempt-{attempt['attempt']}" / "notes.md").write_text(
        entry["attempt_note"].rstrip() + "\n",
        encoding="utf-8",
    )

    source_path = (
        ROOT
        / "src"
        / row["object_id"]
        / f"{int(row['address'], 0):08X}.cpp"
    )
    source_path.parent.mkdir(parents=True, exist_ok=True)
    source_path.write_text(source, encoding="utf-8")

    run(str(PYTHON), "tools/elf_inventory.py")
    run(str(PYTHON), "configure.py")
    run("ninja")
    run(
        str(PYTHON),
        "tools/decomp.py",
        "finalize",
        row["address"],
        "--status",
        "matched",
        "--summary",
        entry["summary"],
    )
    run(str(PYTHON), "tools/decomp.py", "check")

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
        entry["commit"],
        "-m",
        "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
    )
    commit = run("git", "rev-parse", "--short", "HEAD").strip()
    print(f"committed {commit}")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Match reviewed function candidates from a scratch manifest."
    )
    parser.add_argument(
        "manifest",
        type=Path,
        help="JSON array of reviewed candidates, normally under tmp/.",
    )
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    entries = json.loads(args.manifest.read_text(encoding="utf-8"))
    if not isinstance(entries, list):
        raise RuntimeError("Manifest root must be a JSON array")
    for entry in entries:
        process_entry(entry, args.dry_run)
        if args.dry_run:
            break
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except subprocess.CalledProcessError as error:
        print(error.stdout or "", file=sys.stderr)
        raise SystemExit(error.returncode)
