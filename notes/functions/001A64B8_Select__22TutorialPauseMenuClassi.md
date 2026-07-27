# Select__22TutorialPauseMenuClassi

- Address: `0x001A64B8`
- Size: `0x138` (312 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Released `TutorialPauseMenuClass::Select(int)` body copied exactly with minimal standalone declarations. The single non-placeholder compile test failed because the final-build `assert(0)` declaration/macro was absent from the minimal harness. No variants were tested.

Citations:
- kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp (`TutorialPauseMenuClass::Select`)
- kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.h (`TutorialPauseMenuClass`, `PauseMenuSystem`)
- kelly-slaters-pro-surfer/KS/SRC/ks/SoundScript.h (`SoundScriptManager`)
- tmp/functions/001A64B8_Select__22TutorialPauseMenuClassi/attempt-1/compiler.stderr

## Outcome

The exact released tutorial-pause menu selection failed the isolated compile; the sole attempt scored 0%.
