# adjustSizes__H1Zs_RX01T0_v

- Address: `0x001D6E10`
- Size: `0xA4` (164 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/coords.h`
- Reference source: `KS/SRC/ks/coords.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.0976 | 19.5122 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 50.0 | 17.0732 | `candidate.cpp` |
| 4 | different | 28.6585 | 4.878 | `candidate.cpp` |
| 5 | different | 39.6341 | 26.8293 | `candidate.cpp` |

## Outcome

Five released size-scaling variants reproduced arithmetic but not four target-only FPU hazard nops.
