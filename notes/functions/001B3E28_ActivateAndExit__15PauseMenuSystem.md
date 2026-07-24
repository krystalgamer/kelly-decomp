# ActivateAndExit__15PauseMenuSystem

- Address: `0x001B3E28`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.8929 | 67.8571 | `candidate.cpp` |
| 2 | different | 91.0714 | 85.7143 | `candidate.cpp` |
| 3 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 4 | different | 18.5484 | 3.2258 | `candidate.cpp` |
| 5 | different | 17.5 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred pause menu activate and exit after five source-level attempts; the released body matched semantically, but the target callee-save and constant-argument scheduling did not reproduce.
