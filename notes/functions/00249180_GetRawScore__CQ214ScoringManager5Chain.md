# GetRawScore__CQ214ScoringManager5Chain

- Address: `0x00249180`
- Size: `0x80` (128 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.9375 | 15.625 | `candidate.cpp` |
| 2 | different | 54.6875 | 43.75 | `candidate.cpp` |
| 3 | different | 54.6875 | 43.75 | `candidate.cpp` |
| 4 | different | 54.6875 | 43.75 | `candidate.cpp` |
| 5 | different | 54.6875 | 43.75 | `candidate.cpp` |

## Outcome

Deferred the released chain raw-score calculation after five source-level attempts; the exact list traversal remained four bytes short because the target-only integer-to-float hazard nop could not be reproduced.
