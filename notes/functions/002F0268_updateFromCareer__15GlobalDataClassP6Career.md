# updateFromCareer__15GlobalDataClassP6Career

- Address: `0x002F0268`
- Size: `0x100` (256 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released definition cited at kelly-slaters-pro-surfer/KS/SRC/ks/GlobalData.cpp:205-250; kelly-slaters-pro-surfer/KS/SRC/ks/GlobalData.h:1-65. The single exact-source test returned `compile_failed` with score 0.0000. No variant or later attempt was made.

## Outcome

The released career-update definition failed the isolated compile because its released header include was unavailable; the sole attempt scored 0%.
