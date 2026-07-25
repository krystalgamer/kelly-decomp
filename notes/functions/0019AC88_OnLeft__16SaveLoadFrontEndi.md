# OnLeft__16SaveLoadFrontEndi

- Address: `0x0019AC88`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.9024 | 36.5854 | `candidate.cpp` |
| 2 | different | 50.0 | 38.0952 | `candidate.cpp` |
| 3 | different | 42.6829 | 36.5854 | `candidate.cpp` |
| 4 | different | 59.375 | 47.5 | `candidate.cpp` |
| 5 | different | 16.8605 | 4.6512 | `candidate.cpp` |

## Outcome

Five released-source and exact-layout variants reproduced left navigation and sound bracketing, but GCC2 global-address branch scheduling did not match.
