#!/usr/bin/env python3

from __future__ import annotations

import hashlib
from pathlib import Path


MAX_STEM_BYTES = 120


def safe_stem(row: dict[str, str]) -> str:
    stem = Path(row["notes_file"]).stem
    if len(stem.encode("utf-8")) <= MAX_STEM_BYTES:
        return stem

    digest = hashlib.sha1(stem.encode("utf-8")).hexdigest()[:12]
    suffix = f"_{digest}"
    limit = MAX_STEM_BYTES - len(suffix)
    return stem[:limit] + suffix


def scratch_directory(root: Path, row: dict[str, str]) -> Path:
    return root / safe_stem(row)


def notes_file(row: dict[str, str]) -> Path:
    original = Path(row["notes_file"])
    return original.parent / f"{safe_stem(row)}{original.suffix}"
