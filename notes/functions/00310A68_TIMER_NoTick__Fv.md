# TIMER_NoTick__Fv

- Address: `0x00310A68`
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

The target clears the word-sized timer no-tick global through a local absolute equate.

## Outcome

The target `TIMER_NoTick` global clear matched exactly on the first attempt.
