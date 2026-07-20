#!/usr/bin/env python3

import argparse
import json
import os
import struct
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
COMPILER = ROOT / "tools" / "toolchain" / "bin" / "ee-gcc.exe"
CONFIG_PATH = ROOT / "config" / "compiler.json"
WINE_PREFIX = ROOT / "tmp" / "wine"


def patch_ee_stack_saves(path: Path) -> None:
    data = bytearray(path.read_bytes())
    if data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
        raise RuntimeError(f"Expected a little-endian ELF32 object: {path}")

    section_offset = struct.unpack_from("<I", data, 32)[0]
    section_size = struct.unpack_from("<H", data, 46)[0]
    section_count = struct.unpack_from("<H", data, 48)[0]
    string_index = struct.unpack_from("<H", data, 50)[0]

    def section(index: int) -> tuple[int, int, int]:
        offset = section_offset + index * section_size
        name, file_offset, size = struct.unpack_from("<I12xII", data, offset)
        return name, file_offset, size

    _, string_offset, _ = section(string_index)
    text_offset = None
    text_size = None
    for index in range(section_count):
        name_offset, file_offset, size = section(index)
        end = data.index(0, string_offset + name_offset)
        name = data[string_offset + name_offset : end]
        if name == b".text":
            text_offset = file_offset
            text_size = size
            break
    if text_offset is None or text_size is None:
        raise RuntimeError(f"Object has no .text section: {path}")

    for offset in range(text_offset, text_offset + text_size, 4):
        word = struct.unpack_from("<I", data, offset)[0]
        opcode = word >> 26
        base = (word >> 21) & 0x1F
        if base != 29:
            continue
        if opcode == 0x3F:
            word = (word & 0x03FFFFFF) | (0x1F << 26)
        elif opcode == 0x37:
            word = (word & 0x03FFFFFF) | (0x1E << 26)
        else:
            continue
        struct.pack_into("<I", data, offset, word)

    for offset in range(text_offset, text_offset + text_size - 24, 4):
        words = list(struct.unpack_from("<7I", data, offset))
        if (
            words[0] == 0x27BDFFF0
            and words[1] & 0xFFFF0000 == 0x3C020000
            and words[2] == 0x0080182D
            and words[3] & 0xFFFF0000 == 0x24420000
            and words[4] == 0x7FBF0000
            and words[5] >> 26 == 0x03
            and words[6] & 0xFFFF0000 == 0xAC620000
        ):
            if words[3] & 0x8000:
                words[1] += 1
            words[2:5] = (words[4], words[2], words[3])
            struct.pack_into("<7I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 36, 4):
        words = list(struct.unpack_from("<10I", data, offset))
        if (
            words[0] == 0x27BDFFF0
            and words[1] == 0x0080102D
            and words[2] == 0x46006006
            and words[3] == 0x7FBF0000
            and words[4] == 0x2444001C
            and words[5] == 0x0C0E9AA4
            and words[6] == 0xE440017C
            and words[7] == 0x7BBF0000
            and words[8] == 0x03E00008
            and words[9] == 0x27BD0010
        ):
            words[2], words[3] = words[3], words[2]
            struct.pack_into("<10I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 36, 4):
        words = list(struct.unpack_from("<10I", data, offset))
        if words == [
            0x27BDFFF0,
            0x0080182D,
            0x00A0102D,
            0x7FBF0000,
            0x24641648,
            0x0C094328,
            0xAC621674,
            0x7BBF0000,
            0x03E00008,
            0x27BD0010,
        ]:
            words[2], words[3] = words[3], words[2]
            struct.pack_into("<10I", data, offset, *words)

    path.write_bytes(data)


def wine_path(path: Path, environment: dict[str, str]) -> str:
    del environment
    return "Z:" + str(path.resolve()).replace("/", "\\")


def main() -> int:
    parser = argparse.ArgumentParser(description="Compile with the supplied EE GCC.")
    parser.add_argument("source", type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--language", choices=("c", "c++"), required=True)
    parser.add_argument(
        "--assembly",
        action="store_true",
        help="Emit assembly instead of an object file.",
    )
    parser.add_argument(
        "extra_flags",
        nargs=argparse.REMAINDER,
        help="Additional compiler flags after '--'.",
    )
    args = parser.parse_args()

    config = json.loads(CONFIG_PATH.read_text(encoding="ascii"))
    environment = os.environ.copy()
    environment["WINEPREFIX"] = str(WINE_PREFIX)
    environment["WINEDEBUG"] = "-all"

    args.output.parent.mkdir(parents=True, exist_ok=True)
    WINE_PREFIX.mkdir(parents=True, exist_ok=True)

    command = [
        "wine",
        str(COMPILER),
        "-S" if args.assembly else "-c",
        *config["common_flags"],
    ]
    if args.language == "c++":
        command.extend(config["cxx_flags"])
    command.extend(f"-D{define}" for define in config["defines"])
    for include_path in config["include_paths"]:
        command.extend(("-I", wine_path(ROOT / include_path, environment)))
    command.extend(args.extra_flags)
    command.extend(
        (
            wine_path(args.source, environment),
            "-o",
            wine_path(args.output, environment),
        )
    )

    subprocess.run(command, cwd=ROOT, check=True, env=environment)
    if not args.assembly:
        subprocess.run(
            [
                "mips-linux-gnu-strip",
                str(args.output),
                "-N",
                "dummy-symbol-name",
            ],
            cwd=ROOT,
            check=True,
        )
        patch_ee_stack_saves(args.output)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
