# __14surfer_ai_goalP12ai_interface

- Address: `0x0020BC18`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_ai_goals.cpp`
- Reference source: `KS/SRC/ks/kellyslater_ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.7742 | 32.2581 | `candidate.cpp` |
| 2 | different | 46.7742 | 29.0323 | `candidate.cpp` |
| 3 | different | 34.375 | 15.0 | `candidate.cpp` |
| 4 | different | 74.2188 | 59.375 | `candidate.cpp` |
| 5 | different | 46.7742 | 29.0323 | `candidate.cpp` |

## Outcome

Deferred surfer_ai_goal constructor after five source-level attempts; the released base construction, vtable, KELLYSLATER pstring assignment, and exploded flag reproduced, but the target pstring copy loop and constructor scheduling did not.
