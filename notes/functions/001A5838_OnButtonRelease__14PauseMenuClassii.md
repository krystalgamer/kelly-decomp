# OnButtonRelease__14PauseMenuClassii

- Address: `0x001A5838`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Created one shared source-faithful FrontEndMenus context from the released FEMenu, FEMenuSystem, PauseMenuSystem, and menu-class declarations, then used the released button-release behavior. The target predates the later disconnect guard present in the released file, so the shared core condition was retained.

## Outcome

The pause menu button-release handler matches exactly through shared declarations.
