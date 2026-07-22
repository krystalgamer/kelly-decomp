# OpenMenu__10MenuSystemP4Menu

- Address: `0x00240FD0`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.25 | 65.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Immutable MenuSystem::OpenMenu packet reproduced the exact MenuRender base open, Menu::Open(NULL,this), Refresh, and InitButtonStates order.
