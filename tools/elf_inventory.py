#!/usr/bin/env python3

import argparse
import csv
import dataclasses
import hashlib
import io
import json
import re
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path, PurePosixPath
from typing import Iterable, Optional

import spimdisasm
from spimdisasm.elf32 import (
    Elf32File,
    Elf32SectionHeaderFlag,
    Elf32SymbolTableBinding,
    Elf32SymbolTableType,
)


ROOT = Path(__file__).resolve().parents[1]
ELF_PATH = ROOT / "SLUS_203.34"
REFERENCE_ROOT = ROOT / "kelly-slaters-pro-surfer"
SYMBOLS_PATH = ROOT / "config" / "SLUS_203.34.symbol_addrs.txt"
FILES_PATH = ROOT / "config" / "SLUS_203.34.source_files.csv"
SUMMARY_PATH = ROOT / "config" / "SLUS_203.34.inventory.json"
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"

TEXT_START = 0x00100000
TEXT_END = 0x003E1690

UNITY_FILES = (
    "files_ai.cpp",
    "files_anim.cpp",
    "files_entity.cpp",
    "files_frontend.cpp",
    "files_hwosps2.cpp",
    "files_kellyslater.cpp",
    "files_misc1.cpp",
    "files_misc2.cpp",
    "files_misfits.cpp",
    "files_script.cpp",
    "files_vsim.cpp",
    "files_wave.cpp",
)

IMPLEMENTATION_SUFFIXES = {".c", ".cc", ".cpp", ".cxx", ".s", ".dsm", ".i"}
HANDWRITTEN_SUFFIXES = {".s", ".dsm"}
MUTABLE_QUEUE_FIELDS = ("status", "attempts", "best_score", "commit")


@dataclasses.dataclass(frozen=True)
class MdebugHeader:
    magic: int
    vstamp: int
    iline_max: int
    cb_line: int
    cb_line_offset: int
    idn_max: int
    cb_dn_offset: int
    ipd_max: int
    cb_pd_offset: int
    isym_max: int
    cb_sym_offset: int
    iopt_max: int
    cb_opt_offset: int
    iaux_max: int
    cb_aux_offset: int
    iss_max: int
    cb_ss_offset: int
    iss_ext_max: int
    cb_ss_ext_offset: int
    ifd_max: int
    cb_fd_offset: int
    crfd: int
    cb_rfd_offset: int
    iext_max: int
    cb_ext_offset: int


@dataclasses.dataclass(frozen=True)
class FileDescriptor:
    index: int
    address: int
    path: str
    string_base: int
    string_size: int
    symbol_base: int
    symbol_count: int
    procedure_first: int
    procedure_count: int


@dataclasses.dataclass(frozen=True)
class Procedure:
    address: int
    name: str
    file_index: int


@dataclasses.dataclass(frozen=True)
class Owner:
    source: str
    identifier: str
    classification: str


@dataclasses.dataclass(frozen=True)
class SymbolInfo:
    index: int
    raw_name: str
    emitted_name: str
    address: int
    size: int
    symbol_type: int
    binding: int
    section_name: str


class ReferenceIndex:
    def __init__(self, root: Path) -> None:
        self._by_lower_path: dict[str, str] = {}
        self._by_basename: dict[str, list[str]] = defaultdict(list)

        for path in root.rglob("*"):
            if not path.is_file() or ".git" in path.parts:
                continue
            relative = path.relative_to(root).as_posix()
            self._by_lower_path[relative.lower()] = relative
            self._by_basename[path.name.lower()].append(relative)

    def resolve(self, debug_path: str) -> str:
        normalized = debug_path.replace("\\", "/")
        lowered = normalized.lower()
        candidates: list[str] = []

        prefixes = (
            ("c:/ks/src/", "KS/SRC/"),
            ("c:/ngl/", "NGL/"),
            ("c:/nsl/", "NSL/"),
            ("c:/nvl/", "NVL/"),
        )
        for prefix, replacement in prefixes:
            if lowered.startswith(prefix):
                candidates.append(replacement + normalized[len(prefix) :])

        parts = [part for part in normalized.split("/") if part not in ("", ".")]
        lower_parts = [part.lower() for part in parts]
        if "ngl" in lower_parts:
            index = lower_parts.index("ngl")
            candidates.append("NGL/" + "/".join(parts[index + 1 :]))
        if "nsl" in lower_parts:
            index = lower_parts.index("nsl")
            candidates.append("NSL/" + "/".join(parts[index + 1 :]))
        if "nvl" in lower_parts:
            index = lower_parts.index("nvl")
            candidates.append("NVL/" + "/".join(parts[index + 1 :]))

        if lowered.startswith("ks/"):
            candidates.append("KS/SRC/" + normalized)
        elif lowered.startswith("hwosps2/"):
            candidates.append("KS/SRC/" + normalized)
        elif "/" not in normalized:
            candidates.append("KS/SRC/" + normalized)

        for candidate in candidates:
            match = self._by_lower_path.get(candidate.lower())
            if match is not None:
                return match

        basename_matches = self._by_basename.get(PurePosixPath(normalized).name.lower(), [])
        if len(basename_matches) == 1:
            return basename_matches[0]
        return ""


def read_c_string(data: bytes, offset: int) -> str:
    end = data.index(0, offset)
    return data[offset:end].decode("ascii", errors="replace")


def parse_mdebug(data: bytes, elf: Elf32File) -> tuple[MdebugHeader, list[FileDescriptor], list[Procedure]]:
    section = next(
        section
        for section in elf.sectionHeaders
        if elf.shstrtab[section.name] == ".mdebug"
    )
    header = MdebugHeader(*struct.unpack_from("<2H23I", data, section.offset))

    files: list[FileDescriptor] = []
    procedures: list[Procedure] = []
    file_format = "<I2iI6iHh4iI2I"
    procedure_format = "<9i2h3i"

    for file_index in range(header.ifd_max):
        values = struct.unpack_from(
            file_format,
            data,
            header.cb_fd_offset + file_index * 72,
        )
        (
            address,
            relative_string,
            string_base,
            string_size,
            symbol_base,
            symbol_count,
            _line_base,
            _line_count,
            _option_base,
            _option_count,
            procedure_first,
            procedure_count,
            _aux_base,
            _aux_count,
            _relative_file_base,
            _relative_file_count,
            _bitfield,
            _line_offset,
            _line_size,
        ) = values

        if relative_string >= 0:
            path = read_c_string(
                data,
                header.cb_ss_offset + string_base + relative_string,
            )
        else:
            path = ""

        descriptor = FileDescriptor(
            index=file_index,
            address=address,
            path=path,
            string_base=string_base,
            string_size=string_size,
            symbol_base=symbol_base,
            symbol_count=symbol_count,
            procedure_first=procedure_first,
            procedure_count=procedure_count,
        )
        files.append(descriptor)

        for procedure_index in range(
            procedure_first,
            procedure_first + procedure_count,
        ):
            procedure_values = struct.unpack_from(
                procedure_format,
                data,
                header.cb_pd_offset + procedure_index * 52,
            )
            relative_address = procedure_values[0]
            relative_symbol = procedure_values[1]
            string_offset, symbol_value, _symbol_bits = struct.unpack_from(
                "<III",
                data,
                header.cb_sym_offset
                + (symbol_base + relative_symbol) * 12,
            )
            name = read_c_string(
                data,
                header.cb_ss_offset + string_base + string_offset,
            )

            address_value = symbol_value
            if address_value == 0xFFFFFFFF and relative_address != -1:
                address_value = (address + relative_address) & 0xFFFFFFFF

            if TEXT_START <= address_value < TEXT_END:
                procedures.append(
                    Procedure(
                        address=address_value,
                        name=name,
                        file_index=file_index,
                    )
                )

    return header, files, procedures


def make_owner_identifier(source: str, reference_file: str, file_index: int) -> str:
    path = PurePosixPath(reference_file or source.replace("\\", "/"))
    stem = path.stem
    lowered = (reference_file or source).replace("\\", "/").lower()

    if stem.startswith("files_"):
        return f"game/{stem}"
    if lowered.startswith("ngl/") or "/ngl/" in lowered:
        return f"ngl/{stem}"
    if lowered.startswith("nsl/") or "/nsl/" in lowered:
        return f"nsl/{stem}"
    if lowered.startswith("nvl/") or "/nvl/" in lowered:
        return f"nvl/{stem}"
    if "/zlib/" in lowered:
        return f"third_party/zlib/{stem}"
    return f"external/{stem or 'unknown'}_{file_index:04d}"


def classify_owner(source: str, identifier: str) -> str:
    lowered = source.replace("\\", "/").lower()
    suffix = PurePosixPath(lowered).suffix

    if suffix in HANDWRITTEN_SUFFIXES:
        return "excluded_handwritten"
    if identifier.startswith(("game/", "ngl/", "nsl/", "nvl/")):
        return "eligible"
    if "/zlib/" in lowered:
        return "excluded_third_party"
    if not source:
        return "excluded_unmapped"
    return "excluded_sdk_runtime"


def assign_owners(
    files: list[FileDescriptor],
    reference_index: ReferenceIndex,
) -> list[Owner]:
    marker_indices: list[int] = []
    marker_names: list[str] = []
    for descriptor in files:
        basename = PurePosixPath(descriptor.path.replace("\\", "/")).name.lower()
        if basename in UNITY_FILES:
            marker_indices.append(descriptor.index)
            marker_names.append(basename)

    if tuple(marker_names) != UNITY_FILES:
        raise RuntimeError(
            "Unity file order does not match the released build metadata: "
            + ", ".join(marker_names)
        )

    crt_index = next(
        descriptor.index
        for descriptor in files
        if PurePosixPath(descriptor.path.replace("\\", "/")).name.lower()
        == "crt0.sony.s"
    )

    owner_sources = [""] * len(files)
    for marker_offset, start in enumerate(marker_indices):
        if marker_offset + 1 < len(marker_indices):
            end = marker_indices[marker_offset + 1]
        else:
            end = crt_index
        for file_index in range(start, end):
            owner_sources[file_index] = files[start].path

    current_owner = ""
    for file_index in range(crt_index, len(files)):
        source = files[file_index].path
        suffix = PurePosixPath(source.replace("\\", "/")).suffix.lower()
        if suffix in IMPLEMENTATION_SUFFIXES:
            current_owner = source
        owner_sources[file_index] = current_owner or source

    owners: list[Owner] = []
    for file_index, source in enumerate(owner_sources):
        reference_file = reference_index.resolve(source)
        identifier = make_owner_identifier(source, reference_file, file_index)
        owners.append(
            Owner(
                source=source,
                identifier=identifier,
                classification=classify_owner(source, identifier),
            )
        )
    return owners


def section_names(elf: Elf32File) -> dict[int, str]:
    return {
        index: elf.shstrtab[section.name]
        for index, section in enumerate(elf.sectionHeaders)
    }


def make_unique_symbol_names(
    elf: Elf32File,
    selected_indices: Iterable[int],
) -> dict[int, str]:
    assert elf.symtab is not None
    assert elf.strtab is not None

    groups: dict[str, list[int]] = defaultdict(list)
    for index in selected_indices:
        groups[elf.strtab[elf.symtab[index].name]].append(index)

    result: dict[int, str] = {}
    used: set[str] = set()
    legal_pattern = re.compile(r"[^A-Za-z0-9_.$]")

    for raw_name, indices in groups.items():
        legal_name = legal_pattern.sub("_", raw_name)
        if not legal_name or legal_name[0].isdigit():
            legal_name = "_" + legal_name

        keeper: Optional[int] = None
        if len(indices) == 1:
            keeper = indices[0]
        else:
            non_local = [
                index
                for index in indices
                if elf.symtab[index].stBind
                in (
                    Elf32SymbolTableBinding.GLOBAL.value,
                    Elf32SymbolTableBinding.WEAK.value,
                )
            ]
            if len(non_local) == 1:
                keeper = non_local[0]

        for index in indices:
            symbol = elf.symtab[index]
            if index == keeper and legal_name not in used:
                emitted_name = legal_name
            else:
                emitted_name = f"{legal_name}_{symbol.value:08X}"
                serial = 2
                while emitted_name in used:
                    emitted_name = f"{legal_name}_{symbol.value:08X}_{serial}"
                    serial += 1
            result[index] = emitted_name
            used.add(emitted_name)

    return result


def collect_symbols(elf: Elf32File) -> list[SymbolInfo]:
    if elf.symtab is None or elf.strtab is None:
        raise RuntimeError("SLUS_203.34 does not contain a usable symbol table")

    names = section_names(elf)
    selected_indices: list[int] = []
    for index, symbol in enumerate(elf.symtab):
        if not symbol.name or not symbol.value:
            continue
        if symbol.stType == Elf32SymbolTableType.FUNC.value:
            selected_indices.append(index)
            continue
        if symbol.stType not in (
            Elf32SymbolTableType.OBJECT.value,
            Elf32SymbolTableType.NOTYPE.value,
        ):
            continue
        if symbol.shndx >= len(elf.sectionHeaders):
            continue
        flags, _unknown = Elf32SectionHeaderFlag.parseFlags(
            elf.sectionHeaders[symbol.shndx].flags
        )
        if Elf32SectionHeaderFlag.ALLOC in flags:
            selected_indices.append(index)

    emitted_names = make_unique_symbol_names(elf, selected_indices)
    symbols: list[SymbolInfo] = []
    for index in selected_indices:
        symbol = elf.symtab[index]
        symbols.append(
            SymbolInfo(
                index=index,
                raw_name=elf.strtab[symbol.name],
                emitted_name=emitted_names[index],
                address=symbol.value,
                size=symbol.size,
                symbol_type=symbol.stType,
                binding=symbol.stBind,
                section_name=names.get(symbol.shndx, ""),
            )
        )
    return symbols


def format_symbol_file(symbols: list[SymbolInfo]) -> str:
    lines = [
        "// Generated by tools/elf_inventory.py from the symbol-bearing ELF.",
        "// Do not edit manually.",
    ]
    priority = {
        Elf32SymbolTableType.FUNC.value: 0,
        Elf32SymbolTableType.OBJECT.value: 1,
        Elf32SymbolTableType.NOTYPE.value: 2,
    }
    for symbol in sorted(
        symbols,
        key=lambda item: (
            item.address,
            priority.get(item.symbol_type, 9),
            item.emitted_name,
        ),
    ):
        attributes: list[str] = []
        if symbol.symbol_type == Elf32SymbolTableType.FUNC.value:
            attributes.append("type:func")
        if symbol.size:
            attributes.append(f"size:0x{symbol.size:X}")
        comment = f" // {' '.join(attributes)}" if attributes else ""
        lines.append(
            f"{symbol.emitted_name} = 0x{symbol.address:08X};{comment}"
        )
    return "\n".join(lines) + "\n"


def read_existing_queue() -> dict[str, dict[str, str]]:
    if not QUEUE_PATH.exists():
        return {}
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return {
            row["address"]: row
            for row in csv.DictReader(queue_file)
        }


def csv_text(fieldnames: list[str], rows: Iterable[dict[str, object]]) -> str:
    output = io.StringIO(newline="")
    writer = csv.DictWriter(output, fieldnames=fieldnames, lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)
    return output.getvalue()


def build_outputs() -> dict[Path, str]:
    spimdisasm.common.GlobalConfig.QUIET = True
    data = ELF_PATH.read_bytes()
    elf = Elf32File(data)
    header, files, procedures = parse_mdebug(data, elf)
    reference_index = ReferenceIndex(REFERENCE_ROOT)
    owners = assign_owners(files, reference_index)
    symbols = collect_symbols(elf)

    procedures_by_key: dict[tuple[int, str], list[Procedure]] = defaultdict(list)
    for procedure in procedures:
        procedures_by_key[(procedure.address, procedure.name)].append(procedure)

    existing_queue = read_existing_queue()
    function_rows: list[dict[str, object]] = []
    mapping_counts: Counter[str] = Counter()
    classification_counts: Counter[str] = Counter()

    for symbol in symbols:
        if symbol.symbol_type != Elf32SymbolTableType.FUNC.value:
            continue

        matches = procedures_by_key.get((symbol.address, symbol.raw_name), [])
        if matches:
            procedure = matches[0]
            descriptor = files[procedure.file_index]
            owner = owners[procedure.file_index]
            source_file = descriptor.path
            reference_file = reference_index.resolve(source_file)
            mapping_counts["exact"] += 1
        else:
            owner = Owner("", "", "excluded_unmapped")
            source_file = ""
            reference_file = ""
            mapping_counts["unmapped"] += 1

        classification = owner.classification
        if (
            PurePosixPath(source_file.replace("\\", "/")).suffix.lower()
            in HANDWRITTEN_SUFFIXES
        ):
            classification = "excluded_handwritten"
        classification_counts[classification] += 1

        address_text = f"0x{symbol.address:08X}"
        previous = existing_queue.get(address_text, {})
        if classification == "eligible":
            initial_status = "pending"
        else:
            initial_status = classification

        notes_file = (
            "notes/functions/"
            f"{symbol.address:08X}_{symbol.emitted_name}.md"
        )
        row: dict[str, object] = {
            "address": address_text,
            "size_bytes": symbol.size,
            "size_hex": f"0x{symbol.size:X}",
            "symbol_name": symbol.emitted_name,
            "raw_name": symbol.raw_name,
            "binding": (
                Elf32SymbolTableBinding.fromValue(symbol.binding).name.lower()
                if Elf32SymbolTableBinding.fromValue(symbol.binding) is not None
                else str(symbol.binding)
            ),
            "source_file": source_file,
            "reference_file": reference_file,
            "object_id": owner.identifier,
            "object_source": owner.source,
            "classification": classification,
            "status": initial_status,
            "attempts": "0",
            "best_score": "",
            "commit": "",
            "notes_file": notes_file,
        }
        for field in MUTABLE_QUEUE_FIELDS:
            if field in previous and previous[field] != "":
                row[field] = previous[field]
        function_rows.append(row)

    function_rows.sort(
        key=lambda row: (
            0 if row["classification"] == "eligible" else 1,
            int(row["size_bytes"]),
            int(str(row["address"]), 16),
        )
    )

    file_rows: list[dict[str, object]] = []
    for descriptor, owner in zip(files, owners):
        reference_file = reference_index.resolve(descriptor.path)
        file_rows.append(
            {
                "index": descriptor.index,
                "address": f"0x{descriptor.address:08X}",
                "path": descriptor.path,
                "reference_file": reference_file,
                "object_id": owner.identifier,
                "object_source": owner.source,
                "classification": owner.classification,
                "symbol_count": descriptor.symbol_count,
                "procedure_count": descriptor.procedure_count,
            }
        )

    queue_fields = [
        "address",
        "size_bytes",
        "size_hex",
        "symbol_name",
        "raw_name",
        "binding",
        "source_file",
        "reference_file",
        "object_id",
        "object_source",
        "classification",
        "status",
        "attempts",
        "best_score",
        "commit",
        "notes_file",
    ]
    file_fields = [
        "index",
        "address",
        "path",
        "reference_file",
        "object_id",
        "object_source",
        "classification",
        "symbol_count",
        "procedure_count",
    ]

    summary = {
        "elf": ELF_PATH.name,
        "elf_sha1": hashlib.sha1(data).hexdigest(),
        "entrypoint": f"0x{elf.header.entry:08X}",
        "mdebug_magic": f"0x{header.magic:04X}",
        "mdebug_file_count": len(files),
        "mdebug_procedure_count": len(procedures),
        "elf_function_count": len(function_rows),
        "mapping_counts": dict(sorted(mapping_counts.items())),
        "classification_counts": dict(sorted(classification_counts.items())),
    }

    return {
        SYMBOLS_PATH: format_symbol_file(symbols),
        FILES_PATH: csv_text(file_fields, file_rows),
        QUEUE_PATH: csv_text(queue_fields, function_rows),
        SUMMARY_PATH: json.dumps(summary, indent=2, sort_keys=True) + "\n",
    }


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Generate the symbol, source, and function inventory."
    )
    parser.add_argument(
        "--check",
        action="store_true",
        help="Fail if committed inventory files are not reproducible.",
    )
    args = parser.parse_args()

    outputs = build_outputs()
    changed: list[Path] = []
    for path, content in outputs.items():
        if path.exists() and path.read_text(encoding="utf-8") == content:
            continue
        changed.append(path)
        if not args.check:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(content, encoding="utf-8")

    if args.check and changed:
        for path in changed:
            print(f"Inventory is stale: {path.relative_to(ROOT)}", file=sys.stderr)
        return 1

    if changed:
        for path in changed:
            print(f"Wrote {path.relative_to(ROOT)}")
    else:
        print("Inventory is up to date")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
