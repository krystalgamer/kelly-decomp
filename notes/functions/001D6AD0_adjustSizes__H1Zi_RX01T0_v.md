# adjustSizes__H1Zi_RX01T0_v

- Address: `0x001D6AD0`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/coords.h`
- Reference source: `KS/SRC/ks/coords.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.0278 | 22.2222 | `candidate.cpp` |
| 2 | different | 34.0278 | 22.2222 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 34.0278 | 22.2222 | `candidate.cpp` |
| 5 | different | 39.4737 | 10.5263 | `candidate.cpp` |

## Outcome

Five released-template variants could not reproduce the two target-only mtc1-to-cvt hazard nops after screen-dimension calls; the source-faithful body otherwise remained stable.
