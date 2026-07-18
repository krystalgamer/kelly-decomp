#!/usr/bin/env python3

import argparse
import csv
import json
import re
import struct
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
QUEUE_PATH = ROOT / "notes" / "function_queue.csv"
TARGET_ROM = ROOT / "SLUS_203.34.rom"
TEXT_VRAM = 0x00100000
JR_RA = 0x03E00008
NOP = 0x00000000


def run(*args: str) -> str:
    result = subprocess.run(
        args,
        cwd=ROOT,
        check=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
    )
    return result.stdout


def next_pending() -> dict[str, str]:
    with QUEUE_PATH.open(newline="", encoding="utf-8") as queue_file:
        for row in csv.DictReader(queue_file):
            if row["status"] == "pending":
                return row
    raise RuntimeError("No pending functions remain")


def decode_parameters(suffix: str) -> tuple[list[str], list[str]]:
    declarations: list[str] = []
    forward_declarations: list[str] = []
    primitive_types = {
        "b": "bool",
        "f": "float",
        "i": "int",
    }
    index = 0
    while index < len(suffix):
        code = suffix[index]
        if code in primitive_types:
            parameter_type = primitive_types[code]
            index += 1
        elif code == "P":
            index += 1
            length_match = re.match(r"\d+", suffix[index:])
            if length_match is None:
                raise RuntimeError(f"Unsupported pointer parameter: {suffix}")
            length_text = length_match.group()
            index += len(length_text)
            name_length = int(length_text)
            type_name = suffix[index : index + name_length]
            if len(type_name) != name_length:
                raise RuntimeError(f"Truncated pointer parameter: {suffix}")
            index += name_length
            parameter_type = f"{type_name}*"
            if type_name not in forward_declarations:
                forward_declarations.append(type_name)
        else:
            raise RuntimeError(f"Unsupported parameter encoding: {suffix[index:]}")
        declarations.append(f"{parameter_type} arg{len(declarations)}")
    return declarations, forward_declarations


def parse_method(
    row: dict[str, str],
) -> tuple[str, str, list[str], list[str]]:
    if row["size_bytes"] != "8":
        raise RuntimeError(f"Next function is not 8 bytes: {row['raw_name']}")
    if not row["reference_file"].startswith("KS/SRC/ks/"):
        raise RuntimeError(f"Next function is not front-end code: {row['raw_name']}")

    raw_name = row["raw_name"]
    match = re.fullmatch(r"(.+)__(\d+)([A-Za-z_][A-Za-z0-9_]*)", raw_name)
    if match is None:
        raise RuntimeError(f"Unsupported empty method mangling: {raw_name}")
    method, length_text, encoded_tail = match.groups()
    class_length = int(length_text)
    class_name = encoded_tail[:class_length]
    suffix = encoded_tail[class_length:]
    if len(class_name) != class_length:
        raise RuntimeError(f"Class length mismatch in symbol: {raw_name}")
    parameters, forward_declarations = decode_parameters(suffix)

    address = int(row["address"], 0)
    offset = address - TEXT_VRAM
    first, second = struct.unpack(
        "<II",
        TARGET_ROM.read_bytes()[offset : offset + 8],
    )
    if (first, second) != (JR_RA, NOP):
        raise RuntimeError(f"Target method is not a no-op: {raw_name}")
    return method, class_name, parameters, forward_declarations


def source_text(
    method: str,
    class_name: str,
    parameters: list[str],
    forward_declarations: list[str],
) -> str:
    declaration = ", ".join(parameters)
    prefix = "".join(
        f"class {type_name};\n" for type_name in forward_declarations
    )
    if prefix:
        prefix += "\n"
    return prefix + (
        f"class {class_name} {{\n"
        "public:\n"
        f"    void {method}({declaration});\n"
        "};\n\n"
        f"void {class_name}::{method}({declaration}) {{\n"
        "}\n"
    )


def process_one(dry_run: bool) -> None:
    if not dry_run and run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    row = next_pending()
    method, class_name, parameters, forward_declarations = parse_method(row)
    display_parameters = ", ".join(
        parameter.rsplit(" ", 1)[0] for parameter in parameters
    )
    print(
        f"{row['address']} {class_name}::{method}({display_parameters})",
        flush=True,
    )
    if dry_run:
        return

    run(
        str(ROOT / "env" / "bin" / "python"),
        "tools/function_test.py",
        "prepare",
        row["address"],
    )
    scratch = (
        ROOT
        / "tmp"
        / "functions"
        / Path(row["notes_file"]).stem
    )
    candidate = scratch / "candidate.cpp"
    candidate.write_text(
        source_text(method, class_name, parameters, forward_declarations),
        encoding="utf-8",
    )
    run(
        str(ROOT / "env" / "bin" / "python"),
        "tools/function_test.py",
        "test",
        row["address"],
    )
    attempts = json.loads(
        (scratch / "attempts.json").read_text(encoding="utf-8")
    )
    if attempts[-1]["status"] != "matched":
        raise RuntimeError(f"Generated hook did not match: {row['raw_name']}")

    attempt_number = attempts[-1]["attempt"]
    (scratch / f"attempt-{attempt_number}" / "notes.md").write_text(
        "The target and released configuration reduce this front-end hook to "
        "an empty method. The guarded candidate matched on the first attempt.\n",
        encoding="utf-8",
    )

    source_path = (
        ROOT
        / "src"
        / row["object_id"]
        / f"{int(row['address'], 0):08X}.cpp"
    )
    source_path.parent.mkdir(parents=True, exist_ok=True)
    source_path.write_text(
        source_text(method, class_name, parameters, forward_declarations),
        encoding="utf-8",
    )

    run(str(ROOT / "env" / "bin" / "python"), "tools/elf_inventory.py")
    run(str(ROOT / "env" / "bin" / "python"), "configure.py")
    run("ninja")
    run(
        str(ROOT / "env" / "bin" / "python"),
        "tools/decomp.py",
        "finalize",
        row["address"],
        "--status",
        "matched",
        "--summary",
        (
            f"The target and released configuration reduce "
            f"{class_name}::{method}({display_parameters}) to an empty hook. "
            "The first candidate matched exactly and preserved the "
            "byte-identical integrated ROM."
        ),
    )
    run(str(ROOT / "env" / "bin" / "python"), "tools/decomp.py", "check")

    note_path = ROOT / row["notes_file"]
    run(
        "git",
        "add",
        "config/SLUS_203.34.symbol_addrs.txt",
        "notes/function_queue.csv",
        str(note_path.relative_to(ROOT)),
        str(source_path.relative_to(ROOT)),
    )
    run("git", "diff", "--cached", "--check")
    run(
        "git",
        "commit",
        "-m",
        f"decomp: match {class_name} {method}",
        "-m",
        "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
    )
    commit = run("git", "rev-parse", "--short", "HEAD").strip()
    print(f"committed {commit}", flush=True)


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Match empty methods with supported primitive signatures."
    )
    parser.add_argument("--count", type=int, default=1)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    if args.count < 1:
        raise SystemExit("--count must be positive")

    for _index in range(args.count):
        process_one(args.dry_run)
        if args.dry_run:
            break
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except subprocess.CalledProcessError as error:
        print(error.stdout or "", file=sys.stderr)
        raise SystemExit(error.returncode)
