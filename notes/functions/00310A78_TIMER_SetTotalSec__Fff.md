# TIMER_SetTotalSec__Fff

- Address: `0x00310A78`
- Size: `0x14` (20 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/timer.cpp`
- Reference source: `KS/SRC/timer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the two total-time globals through local absolute equates.

## Outcome

The released `TIMER_SetTotalSec` global stores matched exactly on the first attempt.
