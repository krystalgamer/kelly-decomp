# Kelly Slater's Pro Surfer Decompilation

Matching decompilation of the NTSC-U PlayStation 2 executable
`SLUS_203.34`.

## Requirements

- Python 3.10 virtual environment at `env/`
- `ninja`
- `mips-linux-gnu` binutils
- Wine
- The original `SLUS_203.34` ELF in the repository root
- The flat `SLUS_203.34.rom` extracted from that ELF
- The supplied compiler under `tools/toolchain/`

Install the Python dependencies into the existing virtual environment:

```sh
env/bin/pip install -r requirements.txt
```

## Build

```sh
env/bin/python configure.py
ninja
```

The build is accepted only when `build/SLUS_203.34.rom` matches:

```text
f38eaf55ee47eec1bd8ec25b0e2390d9bf2d4832
```

Use `env/bin/python configure.py --clean` for a clean split and rebuild.

## Function workflow

The symbol-bearing ELF drives the function inventory. Eligible
game/engine functions are processed by size and then address.

```sh
env/bin/python tools/decomp.py next
env/bin/python tools/function_test.py prepare FUNCTION
env/bin/python tools/function_test.py test FUNCTION
```

Each function gets at most five distinct candidate compile/diff attempts.
A match is integrated and checksum-verified before its atomic commit. An
unmatched function receives a notes-only commit after the fifth attempt.

All attempt artifacts belong under `tmp/`. Durable state belongs under
`notes/`.

Matched code is stored under `src/` using the original reference paths, such
as `src/KS/SRC/ks/FEPanel.cpp`. Each function is guarded by an address selector;
`configure.py` generates one-function shims under `build/src_functions/` so
the matching build retains isolated function objects.

## Released source

`kelly-slaters-pro-surfer/` is reference-only. Build scripts do not include
or compile from it, and `tools/check_reference.py` rejects any change to its
recorded revision or worktree.
