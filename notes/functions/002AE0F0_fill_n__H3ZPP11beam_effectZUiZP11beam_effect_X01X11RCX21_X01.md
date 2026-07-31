# fill_n__H3ZPP11beam_effectZUiZP11beam_effect_X01X11RCX21_X01

- Address: `0x002AE0F0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reviewed asm preserves the generated pointer fill and exact branch-delay increment.

## Outcome

Matched beam-effect pointer fill loop.
