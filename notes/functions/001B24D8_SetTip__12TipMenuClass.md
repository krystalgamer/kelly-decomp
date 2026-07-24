# SetTip__12TipMenuClass

- Address: `0x001B24D8`
- Size: `0x74` (116 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5484 | 6.4516 | `candidate.cpp` |
| 2 | different | 87.069 | 75.8621 | `candidate.cpp` |
| 3 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 4 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 5 | different | 91.3793 | 89.6552 | `candidate.cpp` |

## Outcome

Deferred tip menu text setup after five source-level attempts; the released NextTip, changeText, and makeBox flow reproduced, but the target prologue and first-call scheduling did not.
