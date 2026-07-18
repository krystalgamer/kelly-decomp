#!/usr/bin/env python3

import argparse
import csv
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

from source_layout import install_function_source


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


def parse_function(
    row: dict[str, str],
) -> tuple[str, str | None, list[str], list[str]]:
    if row["size_bytes"] != "8":
        raise RuntimeError(f"Next function is not 8 bytes: {row['raw_name']}")
    if row["classification"] != "eligible":
        raise RuntimeError(f"Next function is not eligible: {row['raw_name']}")

    raw_name = row["raw_name"]
    global_match = re.fullmatch(r"(.+)__F(.*)", raw_name)
    if global_match is not None:
        function_name, suffix = global_match.groups()
        class_name = None
        if suffix == "v":
            suffix = ""
    else:
        method_match = re.fullmatch(
            r"(.+)__(\d+)([A-Za-z_][A-Za-z0-9_]*)",
            raw_name,
        )
        if method_match is None:
            raise RuntimeError(f"Unsupported empty function mangling: {raw_name}")
        function_name, length_text, encoded_tail = method_match.groups()
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
        raise RuntimeError(f"Target function is not a no-op: {raw_name}")
    return function_name, class_name, parameters, forward_declarations


def source_text(
    function_name: str,
    class_name: str | None,
    parameters: list[str],
    forward_declarations: list[str],
) -> str:
    declaration = ", ".join(parameters)
    prefix = "".join(
        f"class {type_name};\n" for type_name in forward_declarations
    )
    if prefix:
        prefix += "\n"
    if class_name is None:
        return (
            prefix
            + f"void {function_name}({declaration}) {{\n"
            + "}\n"
        )
    return prefix + (
        f"class {class_name} {{\n"
        "public:\n"
        f"    void {function_name}({declaration});\n"
        "};\n\n"
        f"void {class_name}::{function_name}({declaration}) {{\n"
        "}\n"
    )


def process_one(dry_run: bool) -> None:
    if not dry_run and run("git", "status", "--porcelain").strip():
        raise RuntimeError("Working tree is not clean")

    row = next_pending()
    function_name, class_name, parameters, forward_declarations = (
        parse_function(row)
    )
    display_parameters = ", ".join(
        parameter.rsplit(" ", 1)[0] for parameter in parameters
    )
    display_name = (
        function_name
        if class_name is None
        else f"{class_name}::{function_name}"
    )
    print(
        f"{row['address']} {display_name}({display_parameters})",
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
        source_text(
            function_name,
            class_name,
            parameters,
            forward_declarations,
        ),
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

    source_path = install_function_source(
        row,
        source_text(
            function_name,
            class_name,
            parameters,
            forward_declarations,
        ),
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
            f"{display_name}({display_parameters}) to an empty hook. "
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
        (
            f"decomp: match {function_name}"
            if class_name is None
            else f"decomp: match {class_name} {function_name}"
        ),
        "-m",
        "Co-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>",
    )
    commit = run("git", "rev-parse", "--short", "HEAD").strip()
    print(f"committed {commit}", flush=True)


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Match empty functions with supported primitive signatures."
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
