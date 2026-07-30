#!/usr/bin/env python3

import argparse
import csv
import json
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
PYTHON = ROOT / "env" / "bin" / "python"


def run(*args: str) -> None:
    subprocess.run(args, cwd=ROOT, check=True)


parser = argparse.ArgumentParser()
parser.add_argument("address")
parser.add_argument("--summary", required=True)
parser.add_argument("--commit", required=True)
args = parser.parse_args()

if not args.commit.startswith("decomp: defer "):
    raise RuntimeError("Deferred commits must use `decomp: defer ...`")

with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
    rows = list(csv.DictReader(queue_file))
row = next(
    row for row in rows if row["address"].lower() == args.address.lower()
)
status = row["status"]
if status not in ("pending", "source_pending", "sol_pending"):
    raise RuntimeError(
        f"{row['symbol_name']} cannot be deferred from {status}"
    )
next_row = next(candidate for candidate in rows if candidate["status"] == status)
if next_row["address"].lower() != args.address.lower():
    raise RuntimeError(
        f"Expected next {status} {args.address}, got "
        f"{next_row['address']}"
    )
if subprocess.check_output(
    ["git", "status", "--porcelain"],
    cwd=ROOT,
    text=True,
).strip():
    raise RuntimeError("Working tree is not clean")

run(str(PYTHON), "tools/function_test.py", "prepare", args.address)
scratch = ROOT / "tmp" / "functions" / Path(row["notes_file"]).stem
attempts = json.loads(
    (scratch / "attempts.json").read_text(encoding="utf-8")
)
if len(attempts) != 3 or any(
    attempt["status"] == "matched" for attempt in attempts
):
    raise RuntimeError(
        "Deferral requires three exhausted non-matching Sol attempts"
    )
for attempt in attempts:
    notes_path = scratch / f"attempt-{attempt['attempt']}" / "notes.md"
    if not notes_path.exists() or not notes_path.read_text(
        encoding="utf-8"
    ).strip():
        raise RuntimeError(f"Attempt {attempt['attempt']} has no notes")

run("ninja")
run("sha1sum", "-c", "config/SLUS_203.34.rom.sha1")
run(str(PYTHON), "tools/check_reference.py")
run(
    str(PYTHON),
    "tools/decomp.py",
    "finalize",
    args.address,
    "--status",
    "deferred",
    "--summary",
    args.summary,
)
run(str(PYTHON), "tools/decomp.py", "check")
staged_paths = ["notes/function_queue.csv", row["notes_file"]]
if status in ("source_pending", "sol_pending"):
    staged_paths.append(
        str(
            (
                ROOT
                / "notes"
                / status
                / f"{int(row['address'], 0):08X}.json"
            ).relative_to(ROOT)
        )
    )
run("git", "add", "-A", "--", *staged_paths)
run("git", "diff", "--cached", "--check")
run(
    "git",
    "commit",
    "-m",
    args.commit,
    "-m",
    "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
)
