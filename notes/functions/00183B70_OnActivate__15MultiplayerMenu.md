# OnActivate__15MultiplayerMenu

- Address: `0x00183B70`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-consolidated.cpp` |

### Attempt 2 notes

Revalidated the exact released activation logic against the existing consolidated MainFrontEnd and game-mode shared headers.

## Outcome

Matched the exact released multiplayer-menu activation logic using the existing consolidated frontend hierarchy, game-mode layout, base activation, and disable-update bindings.
