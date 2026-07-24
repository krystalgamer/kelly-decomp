#!/usr/bin/env python3

from __future__ import annotations

import hashlib
from pathlib import Path


MAX_SCRATCH_STEM_BYTES = 120
MAX_NOTES_STEM_BYTES = 220


def safe_stem(
    row: dict[str, str],
    max_bytes: int = MAX_NOTES_STEM_BYTES,
) -> str:
    stem = Path(row["notes_file"]).stem
    if len(stem.encode("utf-8")) <= max_bytes:
        return stem

    digest = hashlib.sha1(stem.encode("utf-8")).hexdigest()[:12]
    suffix = f"_{digest}"
    limit = max_bytes - len(suffix)
    return stem[:limit] + suffix


def scratch_directory(root: Path, row: dict[str, str]) -> Path:
    return root / safe_stem(row, MAX_SCRATCH_STEM_BYTES)


def notes_file(row: dict[str, str]) -> Path:
    original = Path(row["notes_file"])
    return original.parent / (
        f"{safe_stem(row, MAX_NOTES_STEM_BYTES)}{original.suffix}"
    )
