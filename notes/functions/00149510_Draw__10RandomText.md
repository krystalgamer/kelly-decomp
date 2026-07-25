# Draw__10RandomText

- Address: `0x00149510`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.75 | 7.5 | `candidate.cpp` |
| 2 | different | 30.625 | 10.0 | `candidate.cpp` |
| 3 | different | 34.375 | 17.5 | `candidate.cpp` |
| 4 | different | 30.625 | 10.0 | `candidate.cpp` |
| 5 | different | 35.625 | 20.0 | `candidate.cpp` |

## Outcome

Five released-source and ABI-layout variants reproduced RandomText rendering semantics, but target FPU hazard and virtual-call scheduling did not match.
