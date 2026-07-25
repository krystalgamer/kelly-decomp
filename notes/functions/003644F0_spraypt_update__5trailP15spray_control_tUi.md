# spraypt_update__5trailP15spray_control_tUi

- Address: `0x003644F0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.4468 | 8.5106 | `candidate.cpp` |
| 2 | different | 88.3333 | 77.7778 | `candidate.cpp` |
| 3 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 4 | different | 38.8298 | 21.2766 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released update logic matched using shared source-faithful trail, spray-control, vector, and timer declarations. Expressing the compiler's released pointer induction as an equivalent guarded do-while loop and preserving the long-lived register roles reproduced the exact loop and short-circuit schedule.

## Outcome

Matched the released trail spray-point update with reusable trail and timer declarations.
