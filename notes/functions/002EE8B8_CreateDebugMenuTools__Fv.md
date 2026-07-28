# CreateDebugMenuTools__Fv

- Address: `0x002EE8B8`
- Size: `0x1C4` (452 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Wave/lane: released-source FIRST PASS wave 82, lane A1
- Target: `0x002EE8B8 CreateDebugMenuTools__Fv`, size 452 (`0x1C4`), object `game/files_misc2`
- Released body: `kelly-slaters-pro-surfer/KS/SRC/ks/camera_tool.cpp:313-327`, preserved unchanged with LF endings.
- Candidate used minimal faithful self-contained declarations and no unavailable headers.
- Confirmed attempts=0 before prepare; inspected only `metadata.json` and `target.s` before testing.
- Result: `compile_failed`, score 0.0. Compiler diagnostic: subprocess.CalledProcessError: Command '['wine', '/home/superconta/data/share/kelly/tools/toolchain/bin/ee-gcc.exe', '-c', '-O2', '-G0', '-mvu0-use-vf0-vf31', '-fno-common', '-fno-strict-aliasing', '-fno-exceptions', '-fno-rtti', '-DBUILD_FINAL', '-DSN_TARGET_PS2', '-D__PS2_EE__', '-DARCH_ENGINE', '-DPROJECT_PS2', '-DPS2', '-I', 'Z:\\home\\superconta\\data\\share\\kelly\\include', '-I', 'Z:\\home\\superconta\\data\\share\\kelly\\src', 'Z:\\home\\superconta\\data\\share\\kelly\\tmp\\functions\\002EE8B8_CreateDebugMenuTools__Fv\\attempt-1\\candidate.cpp', '-o', 'Z:\\home\\superconta\\data\\share\\kelly\\tmp\\functions\\002EE8B8_CreateDebugMenuTools__Fv\\attempt-1\\candidate.o']' returned non-zero exit status 1.
- Candidate SHA-1: `5f0c91079db51139d24ecbcd8cbd1cdc5c254303`; source size: 2461 bytes.
- UTC start: 2026-07-28T21:07:00Z; UTC end: 2026-07-28T21:11:22Z; duration: 262.124 seconds.
- Exactly one candidate and one scoring attempt; no alternate source, assembly, annotations, variants, retry, attempts 2-5, or post-test chase.
- No finalize, integration, build, git mutation, or tracked/reference edit.

## Outcome

The exact released debug-menu tools creation candidate failed to compile with its minimal released declarations; no alternate source was attempted.
