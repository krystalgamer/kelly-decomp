# DrawMap__9FEManagerf

- Address: `0x00198D28`
- Size: `0xEC` (236 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.6102 | 16.9492 | `candidate.cpp` |
| 2 | different | 21.6102 | 16.9492 | `candidate.cpp` |
| 3 | different | 21.6102 | 16.9492 | `candidate.cpp` |
| 4 | different | 21.6102 | 16.9492 | `candidate.cpp` |
| 5 | different | 21.6102 | 16.9492 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released frontend map draw and correct BeachFrontEnd virtual slot are recovered, but three conversion hazard nops and the target normal end-scene call/epilogue are replaced by omitted nops and a sibling tail jump.
