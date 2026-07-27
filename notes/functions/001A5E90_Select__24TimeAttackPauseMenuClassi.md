# Select__24TimeAttackPauseMenuClassi

- Address: `0x001A5E90`
- Size: `0x100` (256 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released definition at `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:245-258`, with enum/class declarations cited from `FrontEndMenus.h:62-85` and `FrontEndMenus.h:585-645`. The sole test returned `compile_failed` (score 0.0) because the released `<assert.h>` include was unavailable in the function-test toolchain include paths. No further candidate was attempted.

## Outcome

The exact released pause-menu Select definition failed the isolated compile because the released assert header was unavailable; the sole attempt scored 0%.
