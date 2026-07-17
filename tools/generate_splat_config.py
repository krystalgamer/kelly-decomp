#!/usr/bin/env python3

import csv
import re
from pathlib import Path

import yaml


ROOT = Path(__file__).resolve().parents[1]
BASE_CONFIG = ROOT / "config" / "SLUS_203.34.yaml"
GENERATED_CONFIG = ROOT / "build" / "SLUS_203.34.generated.yaml"
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
SOURCE_ROOT = ROOT / "src"
TEXT_END = 0x2E1690


def queue_by_address() -> dict[int, dict[str, str]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return {
            int(row["address"], 0): row
            for row in csv.DictReader(queue_file)
        }


def source_functions(
    queue: dict[int, dict[str, str]],
) -> list[tuple[int, int, str, str]]:
    if not SOURCE_ROOT.exists():
        return []

    functions: list[tuple[int, int, str, str]] = []
    for path in SOURCE_ROOT.rglob("*"):
        if not path.is_file() or path.suffix.lower() not in (
            ".c",
            ".cc",
            ".cpp",
            ".cxx",
        ):
            continue
        if not re.fullmatch(r"[0-9A-Fa-f]{8}", path.stem):
            continue

        address = int(path.stem, 16)
        row = queue.get(address)
        if row is None:
            raise RuntimeError(f"Source has no queue function: {path}")
        if row["classification"] != "eligible":
            raise RuntimeError(f"Source is not eligible: {path}")

        offset = address - 0x00100000
        size = int(row["size_bytes"])
        if offset < 0 or offset + size > TEXT_END:
            raise RuntimeError(f"Source is outside target text: {path}")

        segment_type = "c" if path.suffix.lower() == ".c" else "cpp"
        segment_name = path.relative_to(SOURCE_ROOT).with_suffix("").as_posix()
        functions.append((offset, size, segment_type, segment_name))

    functions.sort()
    for current, following in zip(functions, functions[1:]):
        if current[0] + current[1] > following[0]:
            raise RuntimeError(
                f"Source functions overlap: {current[3]} and {following[3]}"
            )
    return functions


def main() -> int:
    queue = queue_by_address()
    functions = source_functions(queue)
    config = yaml.safe_load(BASE_CONFIG.read_text(encoding="utf-8"))
    subsegments = config["segments"][0]["subsegments"]
    fixed_subsegments = subsegments[1:]

    text_subsegments: list[list[object]] = []
    cursor = 0
    for offset, size, segment_type, segment_name in functions:
        if cursor < offset:
            text_subsegments.append(
                [cursor, "asm", f"cod/text_{cursor:06X}"]
            )
        text_subsegments.append([offset, segment_type, segment_name])
        cursor = offset + size
    if cursor < TEXT_END:
        text_subsegments.append(
            [cursor, "asm", f"cod/text_{cursor:06X}"]
        )

    config["segments"][0]["subsegments"] = text_subsegments + fixed_subsegments
    GENERATED_CONFIG.parent.mkdir(parents=True, exist_ok=True)
    GENERATED_CONFIG.write_text(
        yaml.safe_dump(config, sort_keys=False, width=120),
        encoding="utf-8",
    )
    print(
        f"Generated {GENERATED_CONFIG.relative_to(ROOT)} "
        f"with {len(functions)} source function(s)"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
