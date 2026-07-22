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

with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
    rows = list(csv.DictReader(queue_file))
row = next(
    row for row in rows if row["address"].lower() == args.address.lower()
)
next_pending = next(row for row in rows if row["status"] == "pending")
if next_pending["address"].lower() != args.address.lower():
    raise RuntimeError(
        f"Expected next pending {args.address}, got "
        f"{next_pending['address']}"
    )
if subprocess.check_output(
    ["git", "status", "--porcelain"],
    cwd=ROOT,
    text=True,
).strip():
    raise RuntimeError("Working tree is not clean")

scratch = ROOT / "tmp" / "functions" / Path(row["notes_file"]).stem
attempts = json.loads(
    (scratch / "attempts.json").read_text(encoding="utf-8")
)
if len(attempts) != 3 or any(
    attempt["status"] == "matched" for attempt in attempts
):
    raise RuntimeError(
        "Sol handoff requires three exhausted non-matching Luna attempts"
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
    "sol_pending",
    "--summary",
    args.summary,
)
run(str(PYTHON), "tools/decomp.py", "check")
run(
    "git",
    "add",
    "notes/function_queue.csv",
    row["notes_file"],
    str(
        (
            ROOT
            / "notes"
            / "sol_pending"
            / f"{int(row['address'], 0):08X}.json"
        ).relative_to(ROOT)
    ),
)
run("git", "diff", "--cached", "--check")
run(
    "git",
    "commit",
    "-m",
    args.commit,
    "-m",
    "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
)
