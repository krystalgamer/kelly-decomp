#!/usr/bin/env python3

import argparse
import json
import os
import shutil
import subprocess
from pathlib import Path

import ninja_syntax
import splat.scripts.split as split


ROOT = Path(__file__).resolve().parent
CONFIG_PATH = ROOT / "config" / "SLUS_203.34.yaml"
LINKER_SCRIPT = ROOT / "SLUS_203.34.ld"
BUILD_DIR = ROOT / "build"
GENERATED_CONFIG_PATH = BUILD_DIR / "SLUS_203.34.generated.yaml"
BUILD_ELF = BUILD_DIR / "SLUS_203.34.elf"
BUILD_ROM = BUILD_DIR / "SLUS_203.34.rom"
BUILD_MAP = BUILD_DIR / "SLUS_203.34.map"
SOURCE_MANIFEST = BUILD_DIR / "source_functions.json"


def run_checked(*args: str) -> None:
    subprocess.run(args, cwd=ROOT, check=True)


def clean() -> None:
    for directory in ("asm", "assets", "build"):
        shutil.rmtree(ROOT / directory, ignore_errors=True)
    for path in (
        ROOT / ".splache",
        ROOT / "build.ninja",
        ROOT / "SLUS_203.34.d",
        LINKER_SCRIPT,
    ):
        path.unlink(missing_ok=True)


def patch_linker_script() -> None:
    text = LINKER_SCRIPT.read_text(encoding="utf-8")
    text = text.replace(
        "    .cod 0x100000 : AT(cod_ROM_START)\n",
        "    .cod 0x100000 : AT(cod_ROM_START) SUBALIGN(1)\n",
        1,
    )
    text = text.replace(
        "    .cod_bss (NOLOAD) :\n",
        "    .cod_bss 0x511F80 (NOLOAD) : SUBALIGN(1)\n",
        1,
    )
    text = text.replace("        . = ALIGN(., 16);\n", "")
    text = text.replace("    __romPos = ALIGN(__romPos, 16);\n", "")
    text = text.replace("    . = ALIGN(., 16);\n", "")
    LINKER_SCRIPT.write_text(text, encoding="utf-8")


def generate_ninja() -> None:
    run_checked("./env/bin/python", "tools/generate_splat_config.py")
    source_manifest = json.loads(SOURCE_MANIFEST.read_text(encoding="utf-8"))
    split.main(
        [GENERATED_CONFIG_PATH],
        modes="all",
        verbose=False,
    )
    linker_entries = split.linker_writer.entries
    patch_linker_script()

    with (ROOT / "build.ninja").open("w", encoding="utf-8") as ninja_file:
        ninja = ninja_syntax.Writer(ninja_file, width=120)
        ninja.variable("ninja_required_version", "1.10")

        ninja.rule(
            "as",
            command=(
                "mkdir -p $$(dirname $out) && "
                "mips-linux-gnu-as -no-pad-sections -EL -march=5900 "
                "-mabi=eabi -Iinclude -o $out $in"
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
        )
        ninja.rule(
            "cxx",
            command=(
                "mkdir -p $$(dirname $out) && "
                "./env/bin/python tools/ee_compile.py --language c++ "
                "--output $out $in"
            ),
            description="CXX $in",
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

        built_objects: list[str] = []
        seen_objects: set[str] = set()
        for entry in linker_entries:
            if entry.object_path is None:
                continue
            object_path = str(entry.object_path)
            if object_path in seen_objects:
                continue
            source_paths = [str(path) for path in entry.src_paths]
            if not source_paths:
                continue

            suffixes = {Path(path).suffix.lower() for path in source_paths}
            if suffixes & {".cpp", ".cc", ".cxx"}:
                rule = "cxx"
            elif ".c" in suffixes:
                rule = "cc"
            else:
                rule = "as"

            implicit: list[str] = []
            if rule in ("cc", "cxx"):
                for source_path in source_paths:
                    address = Path(source_path).stem.upper()
                    source = source_manifest.get(address)
                    if source is not None:
                        implicit.append(source["source"])
                implicit.append("tools/ee_compile.py")

            ninja.build(
                object_path,
                rule,
                source_paths,
                implicit=implicit or None,
            )
            built_objects.append(object_path)
            seen_objects.add(object_path)

        ninja.build(
            str(BUILD_ELF.relative_to(ROOT)),
            "ld",
            str(LINKER_SCRIPT.relative_to(ROOT)),
            implicit=built_objects,
            variables={"mapfile": str(BUILD_MAP.relative_to(ROOT))},
        )
        ninja.build(
            str(BUILD_ROM.relative_to(ROOT)),
            "objcopy",
            str(BUILD_ELF.relative_to(ROOT)),
        )
        ninja.build(
            str(BUILD_ROM.relative_to(ROOT)) + ".ok",
            "sha1",
            "config/SLUS_203.34.rom.sha1",
            implicit=[str(BUILD_ROM.relative_to(ROOT))],
            variables={"checksum": str(BUILD_ROM.relative_to(ROOT))},
        )
        ninja.default(str(BUILD_ROM.relative_to(ROOT)) + ".ok")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Generate the Kelly Slater matching build."
    )
    parser.add_argument(
        "-c",
        "--clean",
        action="store_true",
        help="Remove generated Splat and build output first.",
    )
    args = parser.parse_args()

    os.chdir(ROOT)
    if args.clean:
        clean()

    run_checked("./env/bin/python", "tools/check_reference.py")
    run_checked("./env/bin/python", "tools/elf_inventory.py", "--check")
    run_checked("sha1sum", "-c", "config/checksums.sha1")
    generate_ninja()
    print("Generated build.ninja")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
