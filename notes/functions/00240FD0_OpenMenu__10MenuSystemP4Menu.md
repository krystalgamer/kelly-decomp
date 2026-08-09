# OpenMenu__10MenuSystemP4Menu

- Address: `0x00240FD0`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.25 | 65.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

The raw multiple-inheritance offset wrapper was removed. Adding the missing
base declarations shifts existing menu virtual dispatch, so this function was
deferred pending a complete shared menu hierarchy.
