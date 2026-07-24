# adjustSizes__H1Zf_RX01T0_v

- Address: `0x001D6A50`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `ks/coords.h`
- Reference source: `KS/SRC/ks/coords.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.4839 | 25.8065 | `candidate.cpp` |
| 2 | different | 35.4839 | 25.8065 | `candidate.cpp` |
| 3 | different | 35.4839 | 25.8065 | `candidate.cpp` |
| 4 | different | 33.3333 | 9.0909 | `candidate.cpp` |
| 5 | different | 45.9677 | 29.0323 | `candidate.cpp` |

## Outcome

Deferred adjustSizes<float> after five source-level attempts; the released screen ratios, float conversions, divisions, and stores reproduced, but the two target-only mtc1 conversion hazard nops did not.
