# MENU_DrawTextAt__FiiPCcRC9MenuColor

- Address: `0x00240490`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.6429 | 10.7143 | `candidate.cpp` |
| 2 | different | 22.3214 | 14.2857 | `candidate.cpp` |
| 3 | different | 18.75 | 7.1429 | `candidate.cpp` |
| 4 | different | 17.8571 | 3.5714 | `candidate.cpp` |
| 5 | different | 41.0714 | 21.4286 | `candidate.cpp` |

## Outcome

Deferred PS2 menu text drawing after five source-level attempts; the released call and ABI were reproduced, but target-only integer-to-float hazard nops and FPU save scheduling did not.
