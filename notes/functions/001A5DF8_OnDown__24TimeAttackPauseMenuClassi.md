# OnDown__24TimeAttackPauseMenuClassi

- Address: `0x001A5DF8`
- Size: `0x94` (148 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.6486 | 94.5946 | `candidate.cpp` |
| 2 | different | 97.2973 | 94.5946 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Reused the released pause-menu navigation pattern: temporarily unpause sound, play the up/down event, pause again, then dispatch to the active submenu or base next action. Correct vtable slots matched exactly.

## Outcome

Matched time attack pause down navigation
