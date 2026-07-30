# load__12flyby_camera

- Address: `0x002318C0`
- Size: `0x430` (1072 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 170 lane B2 — 0x002318C0

- Result: **compile_failed**
- Attempts before: **0**
- Attempt tested: **1 only**
- Byte score: **0.0000%**
- Instruction score: **0.0000%**
- Candidate SHA-1: `a2c3d08788f0dfb4b1e25d92441090733f66353e`

The sole candidate included the exact released translation unit containing `flyby_camera::load()` from `kelly-slaters-pro-surfer/KS/SRC/ks/ks_camera.cpp:2621-2725`. Compilation failed because the released-source include path was unresolved from the copied attempt directory. Per the one-attempt constraint, no path correction, alternate candidate, retry, diff chase, tool change, finalization, build, commit, push, queue edit, or tracked-tree edit was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/ks_camera.cpp:2621-2725` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/ks_camera.h:359-375` — authentic released class declaration.
- `tmp/functions/002318C0_load__12flyby_camera/attempt-1/compiler.stderr` — sole attempt failure.
- `tmp/functions/002318C0_load__12flyby_camera/attempt-1/result.json` — sole isolated test result.

## Outcome

The sole exact released-translation-unit attempt failed compilation because its include path was unresolved from the copied attempt directory; no correction, alternate, or retry was attempted.
