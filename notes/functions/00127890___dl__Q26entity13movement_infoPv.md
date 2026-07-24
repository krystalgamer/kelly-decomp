# __dl__Q26entity13movement_infoPv

- Address: `0x00127890`
- Size: `0x7C` (124 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.3226 | 80.6452 | `candidate.cpp` |
| 2 | different | 72.5806 | 48.3871 | `candidate.cpp` |
| 3 | different | 90.3226 | 80.6452 | `candidate.cpp` |
| 4 | different | 90.3226 | 80.6452 | `candidate.cpp` |
| 5 | different | 90.3226 | 80.6452 | `candidate.cpp` |

## Outcome

Deferred entity::movement_info pool operator delete after five source-level attempts; the released null guard, 16-slot pool scan, occupancy clear, and failure print reproduced at 90%, but the target global register and add scheduling did not.
