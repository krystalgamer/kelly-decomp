# IncrementFloatSpeed__20SurfBoardObjectClass

- Address: `0x001F9B18`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.5714 | 42.8571 | `candidate.cpp` |
| 2 | different | 57.1429 | 57.1429 | `increment_float_speed_2.cpp` |
| 3 | matched | 100.0 | 100.0 | `increment_float_speed_3.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The direct expression omitted the target's `mtc1` hazard nop. Pinning the loaded member before constant materialization and spelling the hazard nop reproduces the released schedule.

## Outcome

`SurfBoardObjectClass::IncrementFloatSpeed` matched exactly after preserving load order and the target FPU hazard nop.
