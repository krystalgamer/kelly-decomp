#!/usr/bin/env python3

import argparse
import csv
import hashlib
import json
import subprocess
import sys
from pathlib import Path

from source_layout import (
    install_function_source,
    uses_matching_compiler_barrier,
)


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


def next_status(
    rows: list[dict[str, str]],
    status: str,
) -> dict[str, str]:
    for row in rows:
        if row["status"] == status:
            return row
    raise RuntimeError(f"No {status} functions remain")


def process_entry(entry: dict[str, str], dry_run: bool) -> bool:
    rows = queue_rows()
    by_address = {row["address"].lower(): row for row in rows}
    address = entry["address"].lower()
    if address not in by_address:
        raise RuntimeError(f"Manifest address is not in the queue: {address}")
    row = by_address[address]
    expected_status = entry.get("queue_status", "pending")
    if row["status"] != expected_status:
        print(
            f"skip {row['address']} {row['raw_name']} ({row['status']})",
            flush=True,
        )
        return False
    if expected_status == "sol_pending" and any(
        queued["status"] == "pending" for queued in rows
    ):
        raise RuntimeError(
            "Sol second-pass work cannot start while pending functions remain"
        )

    pending = next_status(rows, expected_status)
    if pending["address"].lower() != address:
        raise RuntimeError(
            f"Manifest expects {row['address']} {row['raw_name']}, "
            f"but the next {expected_status} function is "
            f"{pending['address']} {pending['raw_name']}"
        )
    print(f"{row['address']} {row['raw_name']}", flush=True)
    if dry_run:
        return True
    if run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    run(str(PYTHON), "tools/function_test.py", "prepare", row["address"])
    scratch = ROOT / "tmp" / "functions" / Path(row["notes_file"]).stem
    candidate = scratch / "candidate.cpp"
    source = entry["source"]
    if not source.endswith("\n"):
        source += "\n"
    candidate_prefix = entry.get("candidate_prefix", "")
    if candidate_prefix and not candidate_prefix.endswith("\n"):
        candidate_prefix += "\n"
    candidate_source = candidate_prefix + source
    candidate.write_text(candidate_source, encoding="utf-8")
    run(str(PYTHON), "tools/function_test.py", "test", row["address"])

    attempts = json.loads(
        (scratch / "attempts.json").read_text(encoding="utf-8")
    )
    candidate_sha1 = hashlib.sha1(candidate_source.encode()).hexdigest()
    attempt = next(
        attempt
        for attempt in attempts
        if attempt["candidate_sha1"] == candidate_sha1
    )
    if attempt["status"] != "matched":
        raise RuntimeError(
            f"Manifest candidate did not match {row['raw_name']}: "
            f"{attempt['score']:.2f}%"
        )
    attempt_note = entry["attempt_note"].rstrip()
    if uses_matching_compiler_barrier(source):
        attempt_note += (
            "\n\n`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only "
            "annotation that emits no target instruction. It prevents EE GCC "
            "from applying the sibling/tail-call or scheduling transformation "
            "described above."
        )
    (scratch / f"attempt-{attempt['attempt']}" / "notes.md").write_text(
        attempt_note + "\n",
        encoding="utf-8",
    )

    source_path = install_function_source(row, source)

    run(str(PYTHON), "tools/elf_inventory.py")
    run(str(PYTHON), "tools/fast_configure.py")
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
    staged_paths = [
        "config/SLUS_203.34.symbol_addrs.txt",
        "notes/function_queue.csv",
        str(note_path.relative_to(ROOT)),
        str(source_path.relative_to(ROOT)),
    ]
    if expected_status == "sol_pending":
        handoff_path = (
            ROOT
            / "notes"
            / "sol_pending"
            / f"{int(row['address'], 0):08X}.json"
        )
        staged_paths.append(str(handoff_path.relative_to(ROOT)))
    run("git", "add", *staged_paths)
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
    print(f"committed {commit}", flush=True)
    return True


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Match reviewed function candidates from a scratch manifest."
    )
    parser.add_argument(
        "manifest",
        type=Path,
        help="JSON array of reviewed candidates, normally under tmp/.",
    )
    parser.add_argument(
        "--count",
        type=int,
        help="Stop after this many pending manifest entries.",
    )
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    if args.count is not None and args.count < 1:
        raise RuntimeError("--count must be positive")

    entries = json.loads(args.manifest.read_text(encoding="utf-8"))
    if not isinstance(entries, list):
        raise RuntimeError("Manifest root must be a JSON array")
    processed = 0
    for entry in entries:
        if process_entry(entry, args.dry_run):
            processed += 1
        if args.dry_run:
            break
        if args.count is not None and processed >= args.count:
            break
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except subprocess.CalledProcessError as error:
        print(error.stdout or "", file=sys.stderr)
        raise SystemExit(error.returncode)
