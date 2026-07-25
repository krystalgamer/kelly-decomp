# Update__11FEMenuEntryf

- Address: `0x00155F38`
- Size: `0x98` (152 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.1842 | 84.2105 | `candidate.cpp` |
| 2 | different | 86.1842 | 84.2105 | `candidate.cpp` |
| 3 | different | 86.1842 | 84.2105 | `candidate.cpp` |
| 4 | different | 86.1842 | 84.2105 | `candidate.cpp` |
| 5 | different | 86.1842 | 84.2105 | `candidate.cpp` |

## Outcome

Five exact menu-entry update variants reproduced all floating-point calculations and text dispatch, but target-specific prologue save/move scheduling did not match.
