# GetNumMultTricks__CQ214ScoringManager6Series

- Address: `0x002499E0`
- Size: `0xA0` (160 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.25 | 20.0 | `candidate.cpp` |
| 2 | different | 75.0 | 47.5 | `candidate.cpp` |
| 3 | different | 21.25 | 2.5 | `candidate.cpp` |
| 4 | different | 21.875 | 2.5 | `candidate.cpp` |
| 5 | different | 21.875 | 2.5 | `candidate.cpp` |

## Outcome

Five released-source and ABI-bound iterator variants reproduced the multiplier rules, but GCC2 list iterator register scheduling did not match.
