#!/usr/bin/env python3

import argparse
import json
import shutil
from pathlib import Path

from attempt_pending_source import (
    ROOT,
    PYTHON,
    SCRATCH_ROOT,
    canonical_include,
    commit_source_pending,
    load_rows,
    resolve,
    run,
)
from function_paths import scratch_directory


def reason_for(row: dict[str, str]) -> str:
    source = row["source_file"] or row["reference_file"]
    if "/gcc/include/" in source:
        return (
            "The function is a compiler-library specialization whose "
            "historical GCC 2 source header is external to the released "
            "game source drop."
        )
    if row["raw_name"] == "__static_initialization_and_destruction_0":
        return (
            "The function is compiler-generated static initialization code "
            "and has no explicit released C++ function body."
        )
    return (
        "The symbol has no directly extractable released definition under "
        "its linked spelling, or its preprocessor branches prevent a safe "
        "standalone extraction."
    )


def process(row: dict[str, str]) -> None:
    if row["status"] != "pending":
        print(f"skip {row['address']} ({row['status']})")
        return
    if run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    reason = reason_for(row)
    source = (
        canonical_include(row)
        + "/*\n"
        + reason
        + "\n"
        + "This first-pass candidate intentionally compiles only the "
        + "available canonical source context.\n"
        + "*/\n"
    )
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
        reason + "\n",
        encoding="utf-8",
    )
    run(
        str(PYTHON),
        "tools/decomp.py",
        "finalize",
        row["address"],
        "--status",
        "source_pending",
        "--summary",
        reason,
    )
    commit = commit_source_pending(row)
    print(
        f"{row['address']} {row['raw_name']} "
        f"{attempt['status']} committed={commit}"
    )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Record source-context attempts for pending blockers."
    )
    parser.add_argument("addresses", nargs="+")
    args = parser.parse_args()

    for address in args.addresses:
        process(resolve(load_rows(), address))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
