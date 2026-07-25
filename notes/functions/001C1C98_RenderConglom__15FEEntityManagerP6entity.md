# RenderConglom__15FEEntityManagerP6entity

- Address: `0x001C1C98`
- Size: `0x9C` (156 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.1282 | 43.5897 | `candidate.cpp` |
| 2 | different | 51.9231 | 38.4615 | `candidate.cpp` |
| 3 | different | 51.9231 | 38.4615 | `candidate.cpp` |
| 4 | different | 55.1282 | 43.5897 | `candidate.cpp` |
| 5 | different | 55.1282 | 43.5897 | `candidate.cpp` |

## Outcome

Five released-source traversal variants reproduced recursive child rendering and the final opaque render call; the target retained an otherwise-unreproducible sibling-load scheduling nop.
