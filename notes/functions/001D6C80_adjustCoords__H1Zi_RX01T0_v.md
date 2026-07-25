# adjustCoords__H1Zi_RX01T0_v

- Address: `0x001D6C80`
- Size: `0xA4` (164 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/coords.h`
- Reference source: `KS/SRC/ks/coords.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.9268 | 19.5122 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 36.0465 | 9.3023 | `candidate.cpp` |
| 4 | different | 32.9268 | 19.5122 | `candidate.cpp` |
| 5 | different | 79.2683 | 75.6098 | `candidate.cpp` |

## Outcome

Five released coordinate-scaling variants reproduced arithmetic but not target-only mtc1/cvt FPU hazard padding.
