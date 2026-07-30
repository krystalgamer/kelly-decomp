# DoWipImpactSoundStuff__22kellyslater_controller

- Address: `0x002207B0`
- Size: `0x42C` (1068 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source attempt only. Candidate references the unchanged released translation unit at `kelly-slaters-pro-surfer/KS/SRC/ks/kellyslater_controller.cpp`; the exact function is at lines 7414-7506 (`kellyslater_controller::DoWipImpactSoundStuff`). The isolated compile failed because the candidate's released-source include path was not found by the Windows-hosted compiler. Per FIRST PASS wave 170 lane A3 instructions, no alternate candidate, path rewrite, declaration reconstruction, diff chasing, or second test was attempted.

## Outcome

The exact released controller translation-unit candidate failed isolated compilation because its released-source include path was not found; no alternate source was attempted.
