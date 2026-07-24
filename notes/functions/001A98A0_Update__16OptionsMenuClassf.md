# Update__16OptionsMenuClassf

- Address: `0x001A98A0`
- Size: `0x8C` (140 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.8571 | 34.2857 | `candidate.cpp` |
| 2 | different | 39.2857 | 22.8571 | `candidate.cpp` |
| 3 | different | 35.0 | 22.8571 | `candidate.cpp` |
| 4 | different | 41.4286 | 22.8571 | `candidate.cpp` |
| 5 | different | 40.7143 | 22.8571 | `candidate.cpp` |

## Outcome

Five source-level variants could not reproduce the target FPU hazard nops, timer reload schedule, and non-tail RumbleOn call together; the best released-body candidate reached 47.86% byte score.
