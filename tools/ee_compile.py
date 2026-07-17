#!/usr/bin/env python3

import argparse
import json
import os
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
COMPILER = ROOT / "tools" / "toolchain" / "bin" / "ee-gcc.exe"
CONFIG_PATH = ROOT / "config" / "compiler.json"
WINE_PREFIX = ROOT / "tmp" / "wine"


def wine_path(path: Path, environment: dict[str, str]) -> str:
    result = subprocess.run(
        ["winepath", "-w", str(path.resolve())],
        check=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
        env=environment,
    )
    return result.stdout.strip()


def main() -> int:
    parser = argparse.ArgumentParser(description="Compile with the supplied EE GCC.")
    parser.add_argument("source", type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--language", choices=("c", "c++"), required=True)
    parser.add_argument(
        "--assembly",
        action="store_true",
        help="Emit assembly instead of an object file.",
    )
    parser.add_argument(
        "extra_flags",
        nargs=argparse.REMAINDER,
        help="Additional compiler flags after '--'.",
    )
    args = parser.parse_args()

    config = json.loads(CONFIG_PATH.read_text(encoding="ascii"))
    environment = os.environ.copy()
    environment["WINEPREFIX"] = str(WINE_PREFIX)
    environment["WINEDEBUG"] = "-all"

    args.output.parent.mkdir(parents=True, exist_ok=True)
    WINE_PREFIX.mkdir(parents=True, exist_ok=True)

    command = [
        "wine",
        str(COMPILER),
        "-S" if args.assembly else "-c",
        *config["common_flags"],
    ]
    if args.language == "c++":
        command.extend(config["cxx_flags"])
    command.extend(f"-D{define}" for define in config["defines"])
    for include_path in config["include_paths"]:
        command.extend(("-I", wine_path(ROOT / include_path, environment)))
    command.extend(args.extra_flags)
    command.extend(
        (
            wine_path(args.source, environment),
            "-o",
            wine_path(args.output, environment),
        )
    )

    subprocess.run(command, cwd=ROOT, check=True, env=environment)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
