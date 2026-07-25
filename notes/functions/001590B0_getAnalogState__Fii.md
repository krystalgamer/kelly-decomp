# getAnalogState__Fii

- Address: `0x001590B0`
- Size: `0x9C` (156 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.641 | 69.2308 | `candidate.cpp` |
| 2 | different | 75.641 | 69.2308 | `candidate.cpp` |
| 3 | different | 75.641 | 69.2308 | `candidate.cpp` |
| 4 | different | 75.641 | 69.2308 | `candidate.cpp` |
| 5 | different | 79.4872 | 74.359 | `candidate.cpp` |

## Outcome

Five released-source controller variants reproduced device selection and midpoint comparisons; the best exact-size candidate matched 29 of 39 instructions, but the target FPU hazard and branch scheduling did not match.
