#!/usr/bin/env python3

import hashlib
import re
from dataclasses import dataclass
from pathlib import Path, PurePosixPath


ROOT = Path(__file__).resolve().parents[1]
SOURCE_ROOT = ROOT / "src"
GENERATED_SOURCE_ROOT = ROOT / "build" / "src_functions"
SOURCE_SUFFIXES = {
    ".c",
    ".cc",
    ".cpp",
    ".cxx",
    ".h",
    ".hh",
    ".hpp",
    ".hxx",
}
MARKER_RE = re.compile(
    r"^#if defined\(KELLY_DECOMP_FUNCTION_([0-9A-F]{8})\)$",
    re.MULTILINE,
)
EMPTY_COMPILER_BARRIER_RE = re.compile(
    r'__asm__\s+volatile\s*\(\s*""\s*\)'
)


@dataclass(frozen=True)
class FunctionSource:
    address: int
    path: Path
    merged: bool


def selector_macro(address: int) -> str:
    return f"KELLY_DECOMP_FUNCTION_{address:08X}"


def uses_matching_compiler_barrier(source: str) -> bool:
    return (
        EMPTY_COMPILER_BARRIER_RE.search(source) is not None
        or "KELLY_DECOMP_COMPILER_BARRIER()" in source
    )


def normalize_matching_annotations(source: str) -> str:
    return EMPTY_COMPILER_BARRIER_RE.sub(
        "KELLY_DECOMP_COMPILER_BARRIER()",
        source,
    )


def merged_source_path(row: dict[str, str]) -> Path:
    reference = (row["reference_file"] or row["object_source"]).replace("\\", "/")
    if re.match(r"^[A-Za-z]:/", reference):
        reference = reference[3:]
    relative = PurePosixPath(reference)
    if not reference or relative.is_absolute() or ".." in relative.parts:
        raise RuntimeError(
            f"Function has no safe reference path: {row['address']} "
            f"{row['raw_name']}"
        )
    return SOURCE_ROOT.joinpath(*relative.parts)


def discover_function_sources() -> dict[int, FunctionSource]:
    if not SOURCE_ROOT.exists():
        return {}

    sources: dict[int, FunctionSource] = {}
    for path in SOURCE_ROOT.rglob("*"):
        if not path.is_file() or path.suffix.lower() not in SOURCE_SUFFIXES:
            continue

        legacy = re.fullmatch(r"[0-9A-Fa-f]{8}", path.stem)
        if legacy is not None:
            address = int(path.stem, 16)
            if address in sources:
                raise RuntimeError(f"Duplicate source for 0x{address:08X}")
            sources[address] = FunctionSource(address, path, False)
            continue

        text = path.read_text(encoding="utf-8")
        for match in MARKER_RE.finditer(text):
            address = int(match.group(1), 16)
            if address in sources:
                raise RuntimeError(f"Duplicate source for 0x{address:08X}")
            sources[address] = FunctionSource(address, path, True)
    return sources


def function_block(row: dict[str, str], source: str) -> str:
    address = int(row["address"], 0)
    source = normalize_matching_annotations(source)
    return (
        f"#if defined({selector_macro(address)})\n"
        f"// {row['address']} {row['raw_name']}\n"
        f"{source.rstrip()}\n"
        "#endif\n"
    )


def install_function_source(row: dict[str, str], source: str) -> Path:
    address = int(row["address"], 0)
    path = merged_source_path(row)
    existing = path.read_text(encoding="utf-8") if path.exists() else ""
    if selector_macro(address) in existing:
        raise RuntimeError(f"Source already exists for {row['address']}")

    path.parent.mkdir(parents=True, exist_ok=True)
    prefix = existing.rstrip()
    if not prefix:
        prefix = (
            "// Matching decompilation blocks selected by generated build "
            "shims.\n"
        )
    path.write_text(
        prefix + "\n\n" + function_block(row, source),
        encoding="utf-8",
    )
    return path


def write_selector_shim(source: FunctionSource) -> Path:
    suffix = ".c" if source.path.suffix.lower() == ".c" else ".cpp"
    shim = GENERATED_SOURCE_ROOT / f"{source.address:08X}{suffix}"
    shim.parent.mkdir(parents=True, exist_ok=True)
    include_path = source.path.relative_to(ROOT).as_posix()
    lines = []
    if source.merged:
        lines.append(f"#define {selector_macro(source.address)} 1")
        text = source.path.read_text(encoding="utf-8")
        marker = f"#if defined({selector_macro(source.address)})"
        start = text.index(marker)
        following = MARKER_RE.search(text, start + len(marker))
        end = following.start() if following else len(text)
        block = text[start:end].rstrip().encode()
        lines.append(
            f"// source-block-sha1: {hashlib.sha1(block).hexdigest()}"
        )
    else:
        digest = hashlib.sha1(source.path.read_bytes()).hexdigest()
        lines.append(f"// source-file-sha1: {digest}")
    lines.append('#include "decomp_annotations.h"')
    lines.append(f'#include "{include_path}"')
    content = "\n".join(lines) + "\n"
    if not shim.exists() or shim.read_text(encoding="utf-8") != content:
        shim.write_text(content, encoding="utf-8")
    return shim
