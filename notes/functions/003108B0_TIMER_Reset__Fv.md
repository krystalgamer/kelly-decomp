# TIMER_Reset__Fv

- Address: `0x003108B0`
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

The released reset clears the total and level timer globals through local absolute equates.

## Outcome

The released `TIMER_Reset` global clears matched exactly on the first attempt.
