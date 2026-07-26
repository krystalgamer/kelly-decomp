# get_color__C6entity

- Address: `0x001336F8`
- Size: `0xC8` (200 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.0 | 84.0 | `candidate.cpp` |
| 2 | different | 86.0 | 84.0 | `candidate.cpp` |
| 3 | different | 86.0 | 84.0 | `candidate.cpp` |
| 4 | different | 82.5 | 80.0 | `candidate.cpp` |
| 5 | different | 82.5 | 80.0 | `candidate.cpp` |

## Outcome

Five attempts reproduced the full entity light-error path at 86% byte similarity, but prologue and call scheduling remained different.
