#!/usr/bin/env python3

import csv
import json
from pathlib import Path

import yaml

from source_layout import (
    GENERATED_SOURCE_ROOT,
    ROOT,
    discover_function_sources,
    write_selector_shim,
)


BASE_CONFIG = ROOT / "config" / "SLUS_203.34.yaml"
GENERATED_CONFIG = ROOT / "build" / "SLUS_203.34.generated.yaml"
SOURCE_MANIFEST = ROOT / "build" / "source_functions.json"
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
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
    GENERATED_SOURCE_ROOT.mkdir(parents=True, exist_ok=True)
    sources = discover_function_sources()
    expected_shims: set[Path] = set()
    functions: list[tuple[int, int, str, str]] = []
    manifest: dict[str, dict[str, str]] = {}
    for address, source in sorted(sources.items()):
        row = queue.get(address)
        if row is None:
            raise RuntimeError(f"Source has no queue function: {source.path}")
        if row["classification"] != "eligible":
            raise RuntimeError(f"Source is not eligible: {source.path}")

        offset = address - 0x00100000
        size = int(row["size_bytes"])
        if offset < 0 or offset + size > TEXT_END:
            raise RuntimeError(f"Source is outside target text: {source.path}")

        shim = write_selector_shim(source)
        expected_shims.add(shim)
        segment_type = "c" if shim.suffix.lower() == ".c" else "cpp"
        segment_name = shim.stem
        functions.append((offset, size, segment_type, segment_name))
        manifest[f"{address:08X}"] = {
            "source": source.path.relative_to(ROOT).as_posix(),
            "shim": shim.relative_to(ROOT).as_posix(),
        }

    for path in GENERATED_SOURCE_ROOT.iterdir():
        if path.is_file() and path not in expected_shims:
            path.unlink()

    functions.sort()
    for current, following in zip(functions, functions[1:]):
        if current[0] + current[1] > following[0]:
            raise RuntimeError(
                f"Source functions overlap: {current[3]} and {following[3]}"
            )
    SOURCE_MANIFEST.write_text(
        json.dumps(manifest, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    return functions


def main() -> int:
    queue = queue_by_address()
    functions = source_functions(queue)
    config = yaml.safe_load(BASE_CONFIG.read_text(encoding="utf-8"))
    config["options"]["src_path"] = GENERATED_SOURCE_ROOT.relative_to(ROOT).as_posix()
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
