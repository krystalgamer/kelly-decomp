# OnButtonRelease__22TutorialPauseMenuClassii

- Address: `0x001A6730`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Immutable reference source ends the tutorial pause draw on CROSS release only when Continue is highlighted. The shared tutorial enum preserves NextTip=0 and Continue=1, with the original FEMenu/PauseMenuSystem layout.

## Outcome

matched TutorialPauseMenuClass OnButtonRelease
