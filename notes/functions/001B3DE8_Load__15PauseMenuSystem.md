# Load__15PauseMenuSystem

- Address: `0x001B3DE8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released GoalsMenu lookup and virtual `Load` call use the shared pause
system, frontend manager, IGO frontend, and panel declarations.

## Outcome

The manual manager, panel, and goals-menu vtable layouts were removed.
