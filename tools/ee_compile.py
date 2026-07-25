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

    for offset in range(text_offset, text_offset + text_size - 40, 4):
        words = list(struct.unpack_from("<11I", data, offset))
        if words == [
            0x27BDFFE0,
            0x7FB00000,
            0x7FBF0010,
            0x0080802D,
            0x0C0CD534,
            0x8CA50000,
            0x0200102D,
            0x7BBF0010,
            0x7BB00000,
            0x03E00008,
            0x27BD0020,
        ]:
            words[1], words[2] = words[2], words[1]
            struct.pack_into("<11I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 40, 4):
        words = list(struct.unpack_from("<11I", data, offset))
        if words == [
            0x27BDFFE0,
            0x7FB00000,
            0x7FBF0010,
            0x0080802D,
            0x0C078B1C,
            0x8E040010,
            0xAE000018,
            0x7BBF0010,
            0x7BB00000,
            0x03E00008,
            0x27BD0020,
        ]:
            words[1], words[2] = words[2], words[1]
            struct.pack_into("<11I", data, offset, *words)

        if words == [
            0x24030318,
            0x3C020046,
            0x00832018,
            0x2442B7B8,
            0x27BDFFF0,
            0x7FBF0000,
            0x0C0D1BFC,
            0x00822021,
            0x7BBF0000,
            0x03E00008,
            0x27BD0010,
        ]:
            words[3], words[4] = words[4], words[3]
            struct.pack_into("<11I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 68, 4):
        words = list(struct.unpack_from("<18I", data, offset))
        if words == [
            0x27BDFFC0,
            0x3C014334,
            0x44810800,
            0xE7B50028,
            0x46016540,
            0x3C013C8E,
            0x3421FA35,
            0x44810000,
            0xE7B60030,
            0x7FB00000,
            0x46006D86,
            0x4600AD42,
            0xE7B70038,
            0x0080802D,
            0x4600B582,
            0x460075C6,
            0xE7B40020,
            0x7FBF0010,
        ]:
            words[14:18] = (words[15], words[17], words[14], words[16])
            struct.pack_into("<18I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 44, 4):
        words = list(struct.unpack_from("<12I", data, offset))
        if words == [
            0x27BDFFD0,
            0x7FB00010,
            0x0080802D,
            0x7FBF0020,
            0xE7AC0000,
            0x0C05210C,
            0xE7AD0004,
            0xC7A10000,
            0x03A0202D,
            0xC7A00004,
            0x37A50004,
            0xE60100A4,
        ]:
            words[8], words[10] = words[10], words[8]
            struct.pack_into("<12I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 180, 4):
        words = list(struct.unpack_from("<46I", data, offset))
        if words == [
            0x27BDFFD0, 0x3C05004C, 0x7FB10010, 0x24A53AD0,
            0x0080882D, 0x7FB00000, 0x26300080, 0x7FBF0020,
            0x0C054BE2, 0x0200202D, 0x3C05004C, 0xAE2200D0,
            0x0200202D, 0x0C054BE2, 0x24A53AE8, 0x3C05004C,
            0xAE2200D4, 0x0200202D, 0x0C054BE2, 0x24A53B00,
            0x3C05004C, 0xAE2200D8, 0x0200202D, 0x0C054BE2,
            0x24A53B10, 0x3C05004C, 0xAE2200DC, 0x0200202D,
            0x0C054BE2, 0x24A53B20, 0x3C05004C, 0xAE2200E0,
            0x0200202D, 0x0C054BE2, 0x24A53B30, 0x3C05004C,
            0xAE2200E4, 0x0200202D, 0x0C054BE2, 0x24A53B40,
            0xAE2200E8, 0x7BBF0020, 0x7BB10010, 0x7BB00000,
            0x03E00008, 0x27BD0030,
        ]:
            words[10:41] = [
                0x3C05004C, 0x0200202D, 0x24A53AE8, 0x0C054BE2,
                0xAE2200D0, 0x3C05004C, 0x0200202D, 0x24A53B00,
                0x0C054BE2, 0xAE2200D4, 0x3C05004C, 0x0200202D,
                0x24A53B10, 0x0C054BE2, 0xAE2200D8, 0x3C05004C,
                0x0200202D, 0x24A53B20, 0x0C054BE2, 0xAE2200DC,
                0x3C05004C, 0x0200202D, 0x24A53B30, 0x0C054BE2,
                0xAE2200E0, 0x3C05004C, 0x0200202D, 0xAE2200E4,
                0x0C054BE2, 0x24A53B40, 0xAE2200E8,
            ]
            struct.pack_into("<46I", data, offset, *words)

    for offset in range(text_offset, text_offset + text_size - 60, 4):
        words = list(struct.unpack_from("<16I", data, offset))
        if words == [
            0x2405001C, 0x0C0C70E0, 0x0000302D, 0x10000006,
            0x00000000, 0x44806000, 0x8C44B4A0, 0x24050019,
            0x0C0C70E0, 0x0000302D, 0x7BBF0030, 0x7BB20020,
            0x7BB10010, 0x7BB00000, 0x03E00008, 0x27BD0040,
        ]:
            words[3] = 0x10000007
            words[4] = 0x7BBF0030
            struct.pack_into("<16I", data, offset, *words)

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
