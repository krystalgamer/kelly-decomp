# PerformIK__22kellyslater_controller

- Address: `0x002224B8`
- Size: `0x164` (356 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.6667 | 13.3333 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 49 lane A4 for `0x002224B8 PerformIK__22kellyslater_controller`.
- Tested the exact released `kellyslater_controller::PerformIK` body once with minimal self-contained declarations preserving the required controller member offsets, `SurferTrick` layout, inline `IsDoingTrick` and `SetFloorObj` behavior, constants, globals, and external member calls.
- Result: **different**, byte score **26.6667%** (96/360) and instruction score **13.3333%** (12/90); candidate size 360 bytes versus target size 356 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.cpp:7833-7883`
- `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.h:342-347,437-442,502-505,531-544,684-710,825-827`
- `kelly-slaters-pro-surfer/KS/SRC/ks/trickdata.h:37-39,316-333`
- `tmp/functions/002224B8_PerformIK__22kellyslater_controller/attempt-1/result.json`

## Outcome

The exact released controller inverse-kinematics operation differed from the target; the sole attempt scored 26.6667%.
