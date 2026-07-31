#!/usr/bin/env python3

import argparse
import csv
import json
import shutil
import subprocess
from pathlib import Path

from function_paths import scratch_directory


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
SCRATCH_ROOT = ROOT / "tmp" / "functions"
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


def load_rows() -> dict[str, dict[str, str]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return {
            row["address"].lower(): row
            for row in csv.DictReader(queue_file)
        }


def candidate_source(
    declaration: str,
    iterator: str,
    value: str,
    variant: int,
) -> str:
    if variant == 1:
        body = """\
    for (; first != last; ++first)
        *first = value;
"""
    elif variant == 2:
        body = """\
    while (first != last) {
        *first = value;
        ++first;
    }
"""
    else:
        body = """\
    if (first == last)
        return;
    do {
        *first = value;
        ++first;
    } while (first != last);
"""

    return f"""\
{declaration.rstrip()}

template<class ForwardIterator, class T>
void fill(ForwardIterator first, ForwardIterator last, const T &value)
{{
{body}}}

template void fill(
    {iterator},
    {iterator},
    {value} const &);
"""


def process(spec: dict[str, str], row: dict[str, str]) -> None:
    scratch = scratch_directory(SCRATCH_ROOT, row)
    shutil.rmtree(scratch, ignore_errors=True)
    run(str(PYTHON), "tools/function_test.py", "prepare", row["address"])

    candidate = scratch / "candidate.cpp"
    for variant in range(1, 4):
        candidate.write_text(
            candidate_source(
                spec["declaration"],
                spec["iterator"],
                spec["value"],
                variant,
            ),
            encoding="utf-8",
        )
        run(
            str(PYTHON),
            "tools/function_test.py",
            "test",
            row["address"],
        )

    attempts = json.loads(
        (scratch / "attempts.json").read_text(encoding="utf-8")
    )
    if len(attempts) != 3:
        raise RuntimeError(
            f"{row['address']} recorded {len(attempts)} attempts"
        )
    for attempt in attempts:
        attempt_number = int(attempt["attempt"])
        (scratch / f"attempt-{attempt_number}" / "notes.md").write_text(
            "Native C++ source-only STL fill attempt.\n",
            encoding="utf-8",
        )
    best = max(float(attempt.get("score", 0)) for attempt in attempts)
    print(
        f"{row['address']} {row['raw_name']} "
        f"best={best:.4f} status={attempts[-1]['status']}"
    )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Run three native C++ variants of released STL fill."
    )
    parser.add_argument("specs", type=Path)
    args = parser.parse_args()

    specs = json.loads(args.specs.read_text(encoding="utf-8"))
    rows = load_rows()
    for spec in specs:
        address = spec["address"].lower()
        if address not in rows:
            raise RuntimeError(f"Unknown queue address: {address}")
        process(spec, rows[address])
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
