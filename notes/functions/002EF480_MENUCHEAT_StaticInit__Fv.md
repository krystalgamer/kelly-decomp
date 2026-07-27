# MENUCHEAT_StaticInit__Fv

- Address: `0x002EF480`
- Size: `0x100` (256 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/cheatmenu.cpp`
- Reference source: `KS/SRC/ks/cheatmenu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released MENUCHEAT_StaticInit definition from kelly-slaters-pro-surfer/KS/SRC/ks/cheatmenu.cpp:68-80, with the exact released includes and required declarations/definitions from lines 1-26. The single test compile failed because the function-test include roots do not contain global.h, menu.h, entity.h, wave.h, or wds.h; no further attempt was made.

## Outcome

The exact released cheat-menu static initializer failed the isolated compile because its released headers were unavailable; the sole attempt scored 0%.
