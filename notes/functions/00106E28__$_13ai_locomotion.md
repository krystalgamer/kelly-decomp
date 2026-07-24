# _$_13ai_locomotion

- Address: `0x00106E28`
- Size: `0x78` (120 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.3333 | 93.3333 | `candidate.cpp` |
| 2 | different | 93.3333 | 93.3333 | `candidate.cpp` |
| 3 | different | 88.3333 | 86.6667 | `candidate.cpp` |
| 4 | different | 93.3333 | 93.3333 | `candidate.cpp` |
| 5 | different | 93.3333 | 93.3333 | `candidate.cpp` |

## Outcome

Deferred AI locomotion destruction after five source-level attempts; the released waypoint-list teardown, path destruction, vtable, and optional delete reproduced, but the target callee-save scheduling did not.
