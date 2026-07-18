# TIMER_SetLevelSec__Ff

- Address: `0x00310A90`
- Size: `0xC` (12 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/timer.cpp`
- Reference source: `KS/SRC/timer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the level-seconds global through a local absolute equate.

## Outcome

The released `TIMER_SetLevelSec` global float store matched exactly on the first attempt.
