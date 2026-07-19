#!/usr/bin/env python3

import csv
import json
import re
import subprocess
from collections import defaultdict
from pathlib import Path

import ninja_syntax

from source_layout import (
    GENERATED_SOURCE_ROOT,
    ROOT,
    discover_function_sources,
    write_selector_shim,
)


SOURCE_TEXT_END = 0x2E1690
LINKED_TEXT_END = 0x2E5580
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
SOURCE_MANIFEST = ROOT / "build/source_functions.json"
RAW_ROOT = ROOT / "build/raw_text"
LINKER_SCRIPT = ROOT / "SLUS_203.34.ld"
BUILD_NINJA = ROOT / "build.ninja"
BUILD_ELF = ROOT / "build/SLUS_203.34.elf"
BUILD_ROM = ROOT / "build/SLUS_203.34.rom"
BUILD_MAP = ROOT / "build/SLUS_203.34.map"
TARGET_ROM = ROOT / "SLUS_203.34.rom"
TARGET_ELF = ROOT / "SLUS_203.34"

REFERENCE_OBJECTS = [
    ROOT / "build/asm/data/cod/2E5580.data.s.o",
    ROOT / "build/asm/data/cod/3B7118.data.s.o",
    ROOT / "build/asm/data/cod/3B7180.rodata.s.o",
    ROOT / "build/asm/data/cod/411E00.gcc_except_table.s.o",
    ROOT / "build/asm/data/cod/411F00.sdata.s.o",
    ROOT / "build/asm/data/cod/00511F80.sbss.s.o",
    ROOT / "build/asm/data/cod/00512280.bss.s.o",
]


def write_if_changed(path: Path, content: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    if not path.exists() or path.read_text(encoding="utf-8") != content:
        path.write_text(content, encoding="utf-8")


def run_checked(*args: str) -> None:
    subprocess.run(args, cwd=ROOT, check=True)


def queue_by_address() -> dict[int, dict[str, str]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return {
            int(row["address"], 0): row
            for row in csv.DictReader(queue_file)
        }


def require_bootstrap_outputs() -> None:
    required = [LINKER_SCRIPT, TARGET_ROM, TARGET_ELF, *REFERENCE_OBJECTS]
    missing = [
        path.relative_to(ROOT).as_posix()
        for path in required
        if not path.exists()
    ]
    if missing:
        raise RuntimeError(
            "Fast configure requires one successful full configure first:\n"
            + "\n".join(missing)
        )


def discover_sources(
    queue: dict[int, dict[str, str]],
) -> list[tuple[int, int, object, Path, Path]]:
    GENERATED_SOURCE_ROOT.mkdir(parents=True, exist_ok=True)
    sources = discover_function_sources()
    expected_shims: set[Path] = set()
    functions: list[tuple[int, int, object, Path, Path]] = []
    manifest: dict[str, dict[str, str]] = {}

    for address, source in sorted(sources.items()):
        row = queue.get(address)
        if row is None:
            raise RuntimeError(f"Source has no queue function: {source.path}")
        if row["classification"] != "eligible":
            raise RuntimeError(f"Source is not eligible: {source.path}")

        offset = address - 0x00100000
        size = int(row["size_bytes"])
        if offset < 0 or offset + size > SOURCE_TEXT_END:
            raise RuntimeError(f"Source is outside target text: {source.path}")

        shim = write_selector_shim(source)
        expected_shims.add(shim)
        suffix = ".c" if shim.suffix.lower() == ".c" else ".cpp"
        object_path = (
            ROOT
            / "build/build/src_functions"
            / f"{address:08X}{suffix}.o"
        )
        functions.append((offset, size, source, shim, object_path))
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
                f"Source functions overlap: "
                f"{current[2].path} and {following[2].path}"
            )

    write_if_changed(
        SOURCE_MANIFEST,
        json.dumps(manifest, indent=2, sort_keys=True) + "\n",
    )
    return functions


def referenced_text_labels() -> dict[int, list[str]]:
    undefined_output = subprocess.check_output(
        [
            "mips-linux-gnu-nm",
            "-u",
            *[str(path) for path in REFERENCE_OBJECTS],
        ],
        cwd=ROOT,
        text=True,
    )
    referenced_symbols = set()
    for line in undefined_output.splitlines():
        match = re.match(r"^\s+U\s+(.+)$", line)
        if match:
            referenced_symbols.add(match.group(1))

    relocation_output = subprocess.check_output(
        [
            "mips-linux-gnu-readelf",
            "-rW",
            *[str(path) for path in REFERENCE_OBJECTS],
        ],
        cwd=ROOT,
        text=True,
    )
    for line in relocation_output.splitlines():
        fields = line.split()
        if len(fields) >= 5 and fields[2].startswith("R_MIPS_"):
            referenced_symbols.add(fields[4])
    referenced_symbols.add("_start")

    labels: dict[int, list[str]] = defaultdict(list)
    nm_output = subprocess.check_output(
        ["mips-linux-gnu-nm", "-a", "--defined-only", str(TARGET_ELF)],
        cwd=ROOT,
        text=True,
    )
    for line in nm_output.splitlines():
        match = re.match(r"^([0-9A-Fa-f]{8})\s+\S\s+(.+)$", line)
        if not match:
            continue
        symbol = match.group(2)
        if symbol.startswith(".") or symbol in {
            "gcc2_compiled.",
            "__gnu_compiled_c",
            "__gnu_compiled_cplusplus",
        }:
            continue
        if symbol not in referenced_symbols:
            continue
        vram = int(match.group(1), 16)
        if 0x00100000 <= vram < 0x00100000 + LINKED_TEXT_END:
            labels[vram - 0x00100000].append(symbol)

    for symbol in referenced_symbols:
        if re.fullmatch(r"\.L[0-9A-F]{8}", symbol):
            labels[int(symbol[2:], 16) - 0x00100000].append(symbol)
            continue
        if re.fullmatch(r"\$LEH_[0-9A-F]{8}", symbol):
            labels[int(symbol[5:], 16) - 0x00100000].append(symbol)
            continue
        address_match = re.search(r"_([0-9A-F]{8})$", symbol)
        if address_match:
            vram = int(address_match.group(1), 16)
            if 0x00100000 <= vram < 0x00100000 + LINKED_TEXT_END:
                labels[vram - 0x00100000].append(symbol)
    return labels


def make_entries(
    functions: list[tuple[int, int, object, Path, Path]],
) -> list[tuple[str, int, int, object, Path | None, Path]]:
    entries = []
    cursor = 0
    for offset, size, source, shim, object_path in functions:
        if cursor < offset:
            entries.append(("raw", cursor, offset, None, None, Path()))
        entries.append(
            ("source", offset, offset + size, source, shim, object_path)
        )
        cursor = offset + size
    if cursor < LINKED_TEXT_END:
        entries.append(
            ("raw", cursor, LINKED_TEXT_END, None, None, Path())
        )
    return entries


def generate_raw_sources(
    entries: list[tuple[str, int, int, object, Path | None, Path]],
    labels: dict[int, list[str]],
) -> list[tuple[Path, Path]]:
    RAW_ROOT.mkdir(parents=True, exist_ok=True)
    raw_objects = []
    expected_files: set[Path] = set()

    for kind, start, end, _, _, _ in entries:
        if kind != "raw":
            continue
        stem = f"text_{start:06X}_{end:06X}"
        asm_path = RAW_ROOT / f"{stem}.s"
        object_path = RAW_ROOT / f"{stem}.s.o"
        expected_files.update((asm_path, object_path))

        content = [".section .text\n"]
        raw_cursor = start
        for label_offset, names in sorted(labels.items()):
            if not raw_cursor <= label_offset < end:
                continue
            if raw_cursor < label_offset:
                content.append(
                    f'.incbin "SLUS_203.34.rom", {raw_cursor}, '
                    f"{label_offset - raw_cursor}\n"
                )
            for name in dict.fromkeys(names):
                content.append(f".globl {name}\n{name}:\n")
            raw_cursor = label_offset
        if raw_cursor < end:
            content.append(
                f'.incbin "SLUS_203.34.rom", {raw_cursor}, '
                f"{end - raw_cursor}\n"
            )
        write_if_changed(asm_path, "".join(content))
        raw_objects.append((asm_path, object_path))

    for path in RAW_ROOT.iterdir():
        if path.is_file() and path not in expected_files:
            path.unlink()
    return raw_objects


def generate_linker_script(
    entries: list[tuple[str, int, int, object, Path | None, Path]],
    raw_objects: list[tuple[Path, Path]],
) -> None:
    linker_text = LINKER_SCRIPT.read_text(encoding="utf-8")
    before, remainder = linker_text.split(
        "        cod_TEXT_START = .;\n", 1
    )
    _, after = remainder.split("        cod_TEXT_END = .;\n", 1)

    text_lines = []
    source_object_paths = []
    raw_index = 0
    for kind, _, _, _, _, source_object in entries:
        if kind == "raw":
            object_path = raw_objects[raw_index][1]
            raw_index += 1
        else:
            object_path = source_object
            source_object_paths.append(
                object_path.relative_to(ROOT).as_posix()
            )
        text_lines.append(
            f"        {object_path.relative_to(ROOT).as_posix()}(.text*);\n"
        )

    clean_after = re.sub(
        (
            r"        build/(?:asm/cod/text_[0-9A-F]+\.s|"
            r"build/src_functions/[0-9A-F]+\.(?:c|cpp)|"
            r"raw_text/text_[0-9A-F_]+\.s)\.o"
            r"\([^)]+\);\n"
        ),
        "",
        after,
    )
    clean_after = re.sub(
        r"        build/asm/data/cod/2E1690\.s\.o\([^)]+\);\n",
        "",
        clean_after,
    )
    fast_linker = (
        before
        + "        cod_TEXT_START = .;\n"
        + "".join(text_lines)
        + "        cod_TEXT_END = .;\n"
        + clean_after
    )

    section_markers = {
        "data": "cod_DATA_START = .;\n",
        "rodata": "cod_RODATA_START = .;\n",
        "gcc_except_table": "cod_GCC_EXCEPT_TABLE_START = .;\n",
        "sdata": "cod_SDATA_START = .;\n",
        "sbss": "cod_SBSS_START = .;\n",
        "bss": "cod_BSS_START = .;\n",
    }
    for section, marker in section_markers.items():
        selector = (
            f".{section} COMMON .scommon"
            if section in {"sbss", "bss"}
            else f".{section}*"
        )
        section_lines = "".join(
            f"        {path}({selector});\n"
            for path in source_object_paths
        )
        fast_linker = fast_linker.replace(
            "        " + marker,
            "        " + marker + section_lines,
            1,
        )
    write_if_changed(LINKER_SCRIPT, fast_linker)


def generate_ninja(
    entries: list[tuple[str, int, int, object, Path | None, Path]],
    raw_objects: list[tuple[Path, Path]],
) -> None:
    with BUILD_NINJA.open("w", encoding="utf-8") as ninja_file:
        ninja = ninja_syntax.Writer(ninja_file, width=120)
        ninja.variable("ninja_required_version", "1.10")
        ninja.pool("wine", 2)
        ninja.rule(
            "as",
            command=(
                "mkdir -p $$(dirname $out) && "
                "mips-linux-gnu-as -no-pad-sections -EL -march=5900 "
                "-mabi=eabi -o $out $in"
            ),
            description="AS $in",
        )
        ninja.rule(
            "cc",
            command=(
                "mkdir -p $$(dirname $out) && "
                "./env/bin/python tools/ee_compile.py --language c "
                "--output $out $in"
            ),
            description="CC $in",
            pool="wine",
        )
        ninja.rule(
            "cxx",
            command=(
                "mkdir -p $$(dirname $out) && "
                "./env/bin/python tools/ee_compile.py --language c++ "
                "--output $out $in"
            ),
            description="CXX $in",
            pool="wine",
        )
        ninja.rule(
            "ld",
            command=(
                "mkdir -p $$(dirname $out) && "
                "mips-linux-gnu-ld -EL "
                "-T config/undefined_syms.txt "
                "-T config/undefined_funcs.txt "
                "-T build/undefined_syms_auto.txt "
                "-T build/undefined_funcs_auto.txt "
                "-T config/linker_script_extra.ld "
                "-T $in -Map $mapfile -o $out"
            ),
            description="LD $out",
        )
        ninja.rule(
            "objcopy",
            command="mips-linux-gnu-objcopy -O binary $in $out",
            description="OBJCOPY $out",
        )
        ninja.rule(
            "sha1",
            command="sha1sum -c $in && touch $out",
            description="SHA1 $checksum",
        )

        for asm_path, object_path in raw_objects:
            ninja.build(
                object_path.relative_to(ROOT).as_posix(),
                "as",
                asm_path.relative_to(ROOT).as_posix(),
            )

        source_objects = []
        for kind, _, _, source, shim, object_path in entries:
            if kind != "source":
                continue
            rule = "cc" if shim.suffix.lower() == ".c" else "cxx"
            ninja.build(
                object_path.relative_to(ROOT).as_posix(),
                rule,
                shim.relative_to(ROOT).as_posix(),
                implicit=[
                    source.path.relative_to(ROOT).as_posix(),
                    "tools/ee_compile.py",
                ],
            )
            source_objects.append(object_path)

        all_objects = [
            object_path.relative_to(ROOT).as_posix()
            for _, object_path in raw_objects
        ]
        all_objects += [
            path.relative_to(ROOT).as_posix()
            for path in source_objects + REFERENCE_OBJECTS
        ]
        ninja.build(
            BUILD_ELF.relative_to(ROOT).as_posix(),
            "ld",
            LINKER_SCRIPT.relative_to(ROOT).as_posix(),
            implicit=all_objects,
            variables={"mapfile": BUILD_MAP.relative_to(ROOT).as_posix()},
        )
        ninja.build(
            BUILD_ROM.relative_to(ROOT).as_posix(),
            "objcopy",
            BUILD_ELF.relative_to(ROOT).as_posix(),
        )
        ninja.build(
            BUILD_ROM.relative_to(ROOT).as_posix() + ".ok",
            "sha1",
            "config/SLUS_203.34.rom.sha1",
            implicit=[BUILD_ROM.relative_to(ROOT).as_posix()],
            variables={"checksum": BUILD_ROM.relative_to(ROOT).as_posix()},
        )
        ninja.default(BUILD_ROM.relative_to(ROOT).as_posix() + ".ok")


def main() -> int:
    run_checked("./env/bin/python", "tools/check_reference.py")
    run_checked("./env/bin/python", "tools/elf_inventory.py", "--check")
    run_checked("sha1sum", "-c", "config/checksums.sha1")
    require_bootstrap_outputs()
    queue = queue_by_address()
    functions = discover_sources(queue)
    entries = make_entries(functions)
    labels = referenced_text_labels()
    raw_objects = generate_raw_sources(entries, labels)
    generate_linker_script(entries, raw_objects)
    generate_ninja(entries, raw_objects)
    print(
        f"Generated fast build with {len(functions)} source function(s) "
        f"and {len(raw_objects)} raw text gap(s)"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
