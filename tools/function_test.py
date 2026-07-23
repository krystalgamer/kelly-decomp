#!/usr/bin/env python3

import argparse
import csv
import difflib
import hashlib
import json
import re
import shutil
import struct
import subprocess
import sys
from pathlib import Path
from typing import Optional

import spimdisasm
from spimdisasm.elf32 import Elf32File, Elf32SymbolTableType


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
TARGET_ELF = ROOT / "SLUS_203.34"
TARGET_ROM = ROOT / "SLUS_203.34.rom"
SCRATCH_ROOT = ROOT / "tmp" / "functions"
SOL_PENDING_ROOT = ROOT / "notes" / "sol_pending"
TEXT_VRAM = 0x00100000
MAX_ATTEMPTS = 5
INSTRUCTION_PATTERN = re.compile(
    r"^\s*([0-9a-fA-F]+):\s+([0-9a-fA-F]{8})\s+(.+)$"
)
FUNCTION_PATTERN = re.compile(r"^[0-9a-fA-F]+ <(.+)>:$")
RELOCATION_PATTERN = re.compile(
    r"^\s*([0-9a-fA-F]+):\s+R_MIPS_([A-Z0-9_]+)"
)


def load_queue() -> list[dict[str, str]]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        return list(csv.DictReader(queue_file))


def resolve_function(query: str) -> dict[str, str]:
    rows = load_queue()
    matches: list[dict[str, str]] = []
    try:
        address = int(query, 0)
    except ValueError:
        address = None

    for row in rows:
        if address is not None and int(row["address"], 0) == address:
            matches.append(row)
        elif query in (row["symbol_name"], row["raw_name"]):
            matches.append(row)

    if not matches:
        raise SystemExit(f"Function not found in queue: {query}")
    if len(matches) > 1:
        choices = ", ".join(
            f"{row['address']}:{row['symbol_name']}" for row in matches
        )
        raise SystemExit(f"Function query is ambiguous: {choices}")
    return matches[0]


def scratch_directory(row: dict[str, str]) -> Path:
    notes_name = Path(row["notes_file"]).stem
    return SCRATCH_ROOT / notes_name


def attempt_limit(row: dict[str, str]) -> int:
    del row
    return MAX_ATTEMPTS


def restore_sol_pending_attempts(
    row: dict[str, str],
    directory: Path,
) -> bool:
    if row["status"] != "sol_pending":
        return False
    address = int(row["address"], 0)
    handoff_path = SOL_PENDING_ROOT / f"{address:08X}.json"
    if not handoff_path.exists():
        raise RuntimeError(
            f"Missing durable Sol handoff for {row['address']}"
        )

    handoff = json.loads(handoff_path.read_text(encoding="utf-8"))
    durable_attempts = []
    for record in handoff["attempts"]:
        source = str(record["source"])
        if hashlib.sha1(source.encode()).hexdigest() != record["candidate_sha1"]:
            raise RuntimeError(
                f"Durable Luna source hash mismatch for {row['address']} "
                f"attempt {record['attempt']}"
            )
        result = {
            key: value
            for key, value in record.items()
            if key not in ("source", "notes")
        }
        durable_attempts.append(result)

    attempts_path = directory / "attempts.json"
    local_attempts = (
        json.loads(attempts_path.read_text(encoding="utf-8"))
        if attempts_path.exists()
        else []
    )
    if local_attempts:
        if len(local_attempts) < len(durable_attempts):
            raise RuntimeError(
                f"Local attempt history for {row['address']} is missing "
                "the durable Luna prefix"
            )
        local_prefix = [
            attempt["candidate_sha1"]
            for attempt in local_attempts[: len(durable_attempts)]
        ]
        durable_prefix = [
            attempt["candidate_sha1"]
            for attempt in durable_attempts
        ]
        if local_prefix != durable_prefix:
            raise RuntimeError(
                f"Local attempt history for {row['address']} conflicts "
                "with the durable Luna prefix"
            )
        extra_attempts = local_attempts[len(durable_attempts) :]
        expected_numbers = list(
            range(
                len(durable_attempts) + 1,
                len(durable_attempts) + len(extra_attempts) + 1,
            )
        )
        actual_numbers = [
            int(attempt["attempt"]) for attempt in extra_attempts
        ]
        if (
            actual_numbers != expected_numbers
            or len(durable_attempts) + len(extra_attempts) > MAX_ATTEMPTS
        ):
            raise RuntimeError(
                f"Local Sol attempts for {row['address']} are not a "
                "valid continuation of the durable Luna prefix"
            )
        restored_attempts = durable_attempts + extra_attempts
    else:
        restored_attempts = durable_attempts

    for record in handoff["attempts"]:
        attempt_number = int(record["attempt"])
        attempt_directory = directory / f"attempt-{attempt_number}"
        attempt_directory.mkdir(exist_ok=True)
        candidate_name = str(record["candidate_file"])
        candidate_path = attempt_directory / candidate_name
        source = str(record["source"])
        if candidate_path.exists():
            if hashlib.sha1(candidate_path.read_bytes()).hexdigest() != record[
                "candidate_sha1"
            ]:
                raise RuntimeError(
                    f"Local Luna candidate conflicts with durable source "
                    f"for {row['address']} attempt {attempt_number}"
                )
        else:
            candidate_path.write_text(source, encoding="utf-8")
        notes_path = attempt_directory / "notes.md"
        if not notes_path.exists():
            notes_path.write_text(
                str(record.get("notes", "")).rstrip() + "\n",
                encoding="utf-8",
            )

    attempts_path.write_text(
        json.dumps(restored_attempts, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    return True


def run_objdump(args: list[str]) -> str:
    result = subprocess.run(
        ["mips-linux-gnu-objdump", *args],
        cwd=ROOT,
        check=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )
    return result.stdout


def prepare(row: dict[str, str]) -> Path:
    directory = scratch_directory(row)
    directory.mkdir(parents=True, exist_ok=True)

    address = int(row["address"], 0)
    size = int(row["size_bytes"])
    offset = address - TEXT_VRAM
    target_rom = TARGET_ROM.read_bytes()
    if offset < 0 or offset + size > len(target_rom):
        raise SystemExit(
            f"Function range {row['address']}+{row['size_hex']} is outside target text"
        )

    metadata = {
        "address": row["address"],
        "size_bytes": size,
        "size_hex": row["size_hex"],
        "symbol_name": row["symbol_name"],
        "raw_name": row["raw_name"],
        "source_file": row["source_file"],
        "reference_file": row["reference_file"],
        "object_id": row["object_id"],
        "classification": row["classification"],
        "max_attempts": MAX_ATTEMPTS,
    }
    (directory / "metadata.json").write_text(
        json.dumps(metadata, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    (directory / "target.bin").write_bytes(target_rom[offset : offset + size])
    target_assembly = run_objdump(
        [
            "-d",
            "-M",
            "no-aliases",
            f"--start-address={address}",
            f"--stop-address={address + size}",
            str(TARGET_ELF),
        ]
    )
    (directory / "target.s").write_text(target_assembly, encoding="utf-8")

    attempts_path = directory / "attempts.json"
    if row["status"] == "sol_pending":
        restore_sol_pending_attempts(row, directory)
    elif not attempts_path.exists():
        attempts_path.write_text("[]\n", encoding="ascii")

    candidate_path = directory / "candidate.cpp"
    if not candidate_path.exists():
        candidate_path.write_text(
            "\n".join(
                (
                    f"// Target: {row['address']} {row['raw_name']}",
                    f"// Reference: {row['reference_file']}",
                    "// Replace this file with one self-contained candidate function.",
                    "",
                )
            ),
            encoding="utf-8",
        )

    print(directory.relative_to(ROOT))
    return directory


def find_function_bytes(
    object_path: Path,
    raw_name: str,
    emitted_name: str,
) -> tuple[bytes, int, str]:
    spimdisasm.common.GlobalConfig.QUIET = True
    data = object_path.read_bytes()
    elf = Elf32File(data)
    if elf.symtab is None or elf.strtab is None:
        raise RuntimeError(f"Object has no symbol table: {object_path}")

    matches = []
    for symbol in elf.symtab:
        if symbol.stType != Elf32SymbolTableType.FUNC.value:
            continue
        name = elf.strtab[symbol.name]
        if name in (raw_name, emitted_name):
            matches.append((symbol, name))

    if not matches:
        available = sorted(
            elf.strtab[symbol.name]
            for symbol in elf.symtab
            if symbol.stType == Elf32SymbolTableType.FUNC.value
        )
        raise RuntimeError(
            f"Candidate did not emit {raw_name}; emitted functions: {available}"
        )
    if len(matches) > 1:
        raise RuntimeError(f"Candidate emitted multiple copies of {raw_name}")

    symbol, actual_name = matches[0]
    section = elf.sectionHeaders[symbol.shndx]
    start = section.offset + symbol.value
    end = start + symbol.size
    return data[start:end], symbol.size, actual_name


def score_bytes(target: bytes, candidate: bytes) -> tuple[float, int, int]:
    length = max(len(target), len(candidate))
    if length == 0:
        return 100.0, 0, 0
    matching = sum(
        index < len(target)
        and index < len(candidate)
        and target[index] == candidate[index]
        for index in range(length)
    )
    return matching * 100.0 / length, matching, length


def parse_instructions(
    assembly: str,
    function_name: str,
) -> list[tuple[int, int, str, Optional[str]]]:
    in_function = False
    instructions: list[list[object]] = []
    by_address: dict[int, list[object]] = {}

    for line in assembly.splitlines():
        function_match = FUNCTION_PATTERN.match(line)
        if function_match:
            if in_function:
                break
            in_function = function_match.group(1) == function_name
            continue
        if not in_function:
            continue

        instruction_match = INSTRUCTION_PATTERN.match(line)
        if instruction_match:
            address = int(instruction_match.group(1), 16)
            instruction: list[object] = [
                address,
                int(instruction_match.group(2), 16),
                instruction_match.group(3).strip(),
                None,
            ]
            instructions.append(instruction)
            by_address[address] = instruction
            continue

        relocation_match = RELOCATION_PATTERN.match(line)
        if relocation_match:
            address = int(relocation_match.group(1), 16)
            instruction = by_address.get(address)
            if instruction is not None:
                instruction[3] = relocation_match.group(2)

    return [
        (int(address), int(word), str(text), relocation)
        for address, word, text, relocation in instructions
    ]


def relocation_mask(relocation: Optional[str]) -> int:
    if relocation in ("26",):
        return 0xFC000000
    if relocation in (
        "16",
        "PC16",
        "HI16",
        "LO16",
        "GPREL16",
        "GOT16",
        "CALL16",
    ):
        return 0xFFFF0000
    return 0xFFFFFFFF


def score_instructions(
    target_assembly: str,
    candidate_assembly: str,
    target_name: str,
    candidate_name: str,
) -> tuple[float, int, int]:
    target = parse_instructions(target_assembly, target_name)
    candidate = parse_instructions(candidate_assembly, candidate_name)
    count = max(len(target), len(candidate))
    if count == 0:
        return 0.0, 0, 0

    matching = 0
    for index in range(count):
        if index >= len(target) or index >= len(candidate):
            continue
        target_word = target[index][1]
        candidate_word = candidate[index][1]
        mask = relocation_mask(candidate[index][3])
        if target_word & mask == candidate_word & mask:
            matching += 1
    return matching * 100.0 / count, matching, count


def compile_attempt(
    row: dict[str, str],
    candidate_path: Path,
) -> dict[str, object]:
    directory = prepare(row)
    attempts_path = directory / "attempts.json"
    attempts = json.loads(attempts_path.read_text(encoding="utf-8"))
    candidate = candidate_path.read_bytes()
    candidate_sha1 = hashlib.sha1(candidate).hexdigest()

    for attempt in attempts:
        if attempt["candidate_sha1"] == candidate_sha1:
            print(
                f"Candidate already tested as attempt {attempt['attempt']}: "
                f"{attempt['status']} score={attempt.get('score', 0)}"
            )
            return attempt

    limit = attempt_limit(row)
    if len(attempts) >= limit:
        raise SystemExit(
            f"Attempt limit reached for {row['symbol_name']}: {limit}"
        )

    attempt_number = len(attempts) + 1
    attempt_directory = directory / f"attempt-{attempt_number}"
    shutil.rmtree(attempt_directory, ignore_errors=True)
    attempt_directory.mkdir()
    saved_candidate = attempt_directory / candidate_path.name
    shutil.copyfile(candidate_path, saved_candidate)
    object_path = attempt_directory / "candidate.o"

    language = (
        "c"
        if Path(row["reference_file"] or row["source_file"]).suffix.lower() == ".c"
        else "c++"
    )
    command = [
        str(ROOT / "env" / "bin" / "python"),
        str(ROOT / "tools" / "ee_compile.py"),
        "--language",
        language,
        "--output",
        str(object_path),
        str(saved_candidate),
    ]
    compile_result = subprocess.run(
        command,
        cwd=ROOT,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )
    (attempt_directory / "compiler.stdout").write_text(
        compile_result.stdout,
        encoding="utf-8",
    )
    (attempt_directory / "compiler.stderr").write_text(
        compile_result.stderr,
        encoding="utf-8",
    )

    result: dict[str, object] = {
        "attempt": attempt_number,
        "candidate_sha1": candidate_sha1,
        "candidate_file": saved_candidate.name,
    }

    if compile_result.returncode != 0:
        result.update(
            {
                "status": "compile_failed",
                "score": 0.0,
            }
        )
    else:
        target = (directory / "target.bin").read_bytes()
        try:
            candidate_bytes, candidate_size, actual_name = find_function_bytes(
                object_path,
                row["raw_name"],
                row["symbol_name"],
            )
        except RuntimeError as error:
            result.update(
                {
                    "status": "symbol_missing",
                    "score": 0.0,
                    "error": str(error),
                }
            )
        else:
            (attempt_directory / "candidate.bin").write_bytes(candidate_bytes)
            candidate_assembly = run_objdump(
                ["-dr", "-M", "no-aliases", str(object_path)]
            )
            (attempt_directory / "candidate.s").write_text(
                candidate_assembly,
                encoding="utf-8",
            )
            target_assembly = (directory / "target.s").read_text(encoding="utf-8")
            assembly_diff = "".join(
                difflib.unified_diff(
                    target_assembly.splitlines(keepends=True),
                    candidate_assembly.splitlines(keepends=True),
                    fromfile="target.s",
                    tofile="candidate.s",
                )
            )
            (attempt_directory / "assembly.diff").write_text(
                assembly_diff,
                encoding="utf-8",
            )

            score, matching_bytes, compared_bytes = score_bytes(
                target,
                candidate_bytes,
            )
            instruction_score, matching_instructions, compared_instructions = (
                score_instructions(
                    target_assembly,
                    candidate_assembly,
                    row["raw_name"],
                    actual_name,
                )
            )
            matched = candidate_bytes == target
            result.update(
                {
                    "status": "matched" if matched else "different",
                    "score": round(score, 4),
                    "matching_bytes": matching_bytes,
                    "compared_bytes": compared_bytes,
                    "instruction_score": round(instruction_score, 4),
                    "matching_instructions": matching_instructions,
                    "compared_instructions": compared_instructions,
                    "target_size": len(target),
                    "candidate_size": candidate_size,
                    "emitted_name": actual_name,
                }
            )

    (attempt_directory / "result.json").write_text(
        json.dumps(result, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    attempts.append(result)
    attempts_path.write_text(
        json.dumps(attempts, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    print(json.dumps(result, indent=2, sort_keys=True))
    return result


def show_status(row: dict[str, str]) -> None:
    directory = scratch_directory(row)
    if not directory.exists():
        print(f"{row['symbol_name']}: not prepared")
        return
    attempts = json.loads(
        (directory / "attempts.json").read_text(encoding="utf-8")
    )
    limit = attempt_limit(row)
    print(
        json.dumps(
            {
                "function": row["symbol_name"],
                "address": row["address"],
                "attempts_used": len(attempts),
                "attempts_remaining": limit - len(attempts),
                "results": attempts,
            },
            indent=2,
            sort_keys=True,
        )
    )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Prepare and score one matching-decompilation function."
    )
    subparsers = parser.add_subparsers(dest="command", required=True)

    prepare_parser = subparsers.add_parser("prepare")
    prepare_parser.add_argument("function")

    test_parser = subparsers.add_parser("test")
    test_parser.add_argument("function")
    test_parser.add_argument(
        "--candidate",
        type=Path,
        help="Candidate source; defaults to the prepared candidate.cpp.",
    )

    status_parser = subparsers.add_parser("status")
    status_parser.add_argument("function")

    args = parser.parse_args()
    row = resolve_function(args.function)
    if row["classification"] != "eligible":
        raise SystemExit(
            f"{row['symbol_name']} is not eligible: {row['classification']}"
        )
    if (
        args.command in ("prepare", "test")
        and row["status"] == "sol_pending"
        and any(
            queued["status"] == "pending"
            for queued in load_queue()
        )
    ):
        raise SystemExit(
            "Sol second-pass work cannot start while pending functions remain"
        )

    if args.command == "prepare":
        prepare(row)
    elif args.command == "test":
        directory = prepare(row)
        candidate_path: Optional[Path] = args.candidate
        if candidate_path is None:
            candidate_path = directory / "candidate.cpp"
        compile_attempt(row, candidate_path)
    else:
        show_status(row)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
