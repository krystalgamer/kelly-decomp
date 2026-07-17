#!/usr/bin/env python3

import json
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONFIG_PATH = ROOT / "config" / "reference.json"


def git(reference: Path, *args: str) -> str:
    result = subprocess.run(
        ["git", "-C", str(reference), *args],
        check=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )
    return result.stdout.strip()


def main() -> int:
    config = json.loads(CONFIG_PATH.read_text(encoding="ascii"))
    reference = ROOT / config["path"]
    expected_commit = config["commit"]

    actual_commit = git(reference, "rev-parse", "HEAD")
    if actual_commit != expected_commit:
        print(
            f"Reference commit changed: expected {expected_commit}, got {actual_commit}",
            file=sys.stderr,
        )
        return 1

    if config["require_clean"]:
        status = git(reference, "status", "--porcelain=v1", "--untracked-files=all")
        if status:
            print("Reference worktree is not clean:", file=sys.stderr)
            print(status, file=sys.stderr)
            return 1

    print(f"Reference is unchanged at {actual_commit}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
