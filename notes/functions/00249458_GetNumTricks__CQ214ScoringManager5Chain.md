# GetNumTricks__CQ214ScoringManager5Chain

- Address: `0x00249458`
- Size: `0x8C` (140 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.1429 | 14.2857 | `candidate.cpp` |
| 2 | different | 93.5714 | 80.0 | `candidate.cpp` |
| 3 | different | 93.5714 | 80.0 | `candidate.cpp` |
| 4 | different | 93.5714 | 80.0 | `candidate.cpp` |
| 5 | different | 84.2857 | 80.0 | `candidate.cpp` |

## Outcome

Five source-level list traversals reproduced the scoring logic but could not match the target sentinel reload register and outer-loop instruction order; the best reached 93.57% byte score.
