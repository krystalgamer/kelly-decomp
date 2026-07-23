# TIMER_Init__Ff

- Address: `0x003109B0`
- Size: `0x50` (80 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/timer.cpp`
- Reference source: `KS/SRC/timer.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 5.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Matched immutable TIMER_Init(float) body on Sol attempt 2 with a scoped barrier preventing a demonstrated reset tail call.
