# Select__15MultiplayerMenui

- Address: `0x00183F08`
- Size: `0xDC` (220 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate-round1.cpp` |

### Attempt 1 notes

Used the exact released MultiplayerMenu::Select body with consolidated MainFrontEnd, GraphicalMenuSystem, FEManager, game-mode, and MultiSubMenu declarations. The first valid candidate matched all 220 bytes and all 55 instructions.

## Outcome

Matched the released multiplayer mode selection and menu transition logic using consolidated frontend, menu-system, game-mode, manager, and submenu declarations.
