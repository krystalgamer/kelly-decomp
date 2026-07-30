#!/usr/bin/env python3

import argparse
import re
from pathlib import Path


SELECTOR_RE = re.compile(
    r"^#if defined\(KELLY_DECOMP_FUNCTION_([0-9A-F]{8})\)\s*$"
)
ADDRESS_MARKER_RE = re.compile(r"^// 0x([0-9A-Fa-f]{8})\s+")
IF_RE = re.compile(r"^#\s*(?:if|ifdef|ifndef)\b")
ENDIF_RE = re.compile(r"^#\s*endif\b")


def migrate(source: Path, output_path: Path) -> None:
    lines = source.read_text(encoding="utf-8").splitlines(keepends=True)
    output: list[str] = []
    index = 0
    migrated = 0

    while index < len(lines):
        selector = SELECTOR_RE.fullmatch(lines[index].rstrip("\n"))
        if selector is None:
            output.append(lines[index])
            index += 1
            continue

        migrated += 1
        address = int(selector.group(1), 16)
        index += 1
        depth = 1
        block: list[str] = []
        while index < len(lines):
            stripped = lines[index].lstrip()
            if IF_RE.match(stripped):
                depth += 1
                block.append(lines[index])
            elif ENDIF_RE.match(stripped):
                depth -= 1
                if depth == 0:
                    index += 1
                    break
                block.append(lines[index])
            else:
                block.append(lines[index])
            index += 1
        else:
            raise RuntimeError(f"Unterminated selector guard in {source}")

        marker_indexes = [
            marker_index
            for marker_index, line in enumerate(block)
            if (
                (marker := ADDRESS_MARKER_RE.match(line)) is not None
                and int(marker.group(1), 16) == address
            )
        ]
        if len(marker_indexes) != 1:
            raise RuntimeError(
                f"Expected one 0x{address:08X} marker in {source}, "
                f"found {len(marker_indexes)}"
            )
        marker_index = marker_indexes[0]
        output.append(block[marker_index])
        output.extend(block[:marker_index])
        output.extend(block[marker_index + 1:])

    result = "".join(output)
    if "KELLY_DECOMP_FUNCTION_" in result:
        raise RuntimeError(
            f"Non-canonical selector expression remains in {source}"
        )
    output_path.write_text(result, encoding="utf-8")
    print(
        f"Migrated {migrated} guarded function(s) "
        f"from {source} to {output_path}"
    )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Remove one-function selector guards from a source file."
    )
    parser.add_argument("path", type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    migrate(args.path, args.output or args.path)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
