#!/usr/bin/env python3

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


@dataclass(frozen=True)
class FunctionSource:
    address: int
    path: Path
    merged: bool


def selector_macro(address: int) -> str:
    return f"KELLY_DECOMP_FUNCTION_{address:08X}"


def merged_source_path(row: dict[str, str]) -> Path:
    reference = row["reference_file"].replace("\\", "/")
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
    lines.append(f'#include "{include_path}"')
    shim.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return shim
