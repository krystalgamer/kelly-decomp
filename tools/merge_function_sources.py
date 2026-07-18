#!/usr/bin/env python3

import csv
from collections import defaultdict
from pathlib import Path

from source_layout import (
    ROOT,
    SOURCE_ROOT,
    discover_function_sources,
    install_function_source,
)


QUEUE_PATH = ROOT / "notes" / "function_queue.csv"


def remove_empty_parents(path: Path) -> None:
    parent = path.parent
    while parent != SOURCE_ROOT:
        try:
            parent.rmdir()
        except OSError:
            break
        parent = parent.parent


def main() -> int:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        rows = list(csv.DictReader(queue_file))
    by_address = {int(row["address"], 0): row for row in rows}
    sources = discover_function_sources()

    legacy: dict[Path, list[tuple[dict[str, str], str, Path]]] = defaultdict(list)
    for address, source in sorted(sources.items()):
        if source.merged:
            continue
        row = by_address.get(address)
        if row is None or row["status"] != "matched":
            raise RuntimeError(f"Legacy source is not a matched queue row: {source.path}")
        legacy_target = Path(row["reference_file"].replace("\\", "/"))
        legacy[legacy_target].append(
            (row, source.path.read_text(encoding="utf-8"), source.path)
        )

    for _target, functions in sorted(legacy.items(), key=lambda item: str(item[0])):
        for row, text, _old_path in functions:
            install_function_source(row, text)
        for _row, _text, old_path in functions:
            old_path.unlink()
            remove_empty_parents(old_path)

    print(
        f"Merged {sum(len(functions) for functions in legacy.values())} "
        f"function source(s) into {len(legacy)} reference-path file(s)"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
