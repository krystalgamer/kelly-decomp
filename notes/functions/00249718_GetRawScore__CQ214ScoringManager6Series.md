# GetRawScore__CQ214ScoringManager6Series

- Address: `0x00249718`
- Size: `0x9C` (156 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.7692 | 46.1538 | `candidate.cpp` |
| 2 | different | 59.6154 | 46.1538 | `candidate.cpp` |
| 3 | different | 59.6154 | 46.1538 | `candidate.cpp` |
| 4 | different | 56.4103 | 35.8974 | `candidate.cpp` |
| 5 | different | 56.4103 | 35.8974 | `candidate.cpp` |

## Outcome

Five released-source nested scoring variants reproduced list traversal and score scaling; the exact call sequence remained one instruction short because the target retained an FPU conversion hazard nop.
