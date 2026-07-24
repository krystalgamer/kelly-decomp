# __Q214ScoringManager5Chain

- Address: `0x00249000`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.7857 | 7.1429 | `candidate.cpp` |
| 2 | different | 71.4286 | 50.0 | `candidate.cpp` |
| 3 | different | 28.5714 | 3.5714 | `candidate.cpp` |
| 4 | different | 71.4286 | 50.0 | `candidate.cpp` |
| 5 | different | 52.6786 | 25.0 | `candidate.cpp` |

## Outcome

Deferred ScoringManager Chain construction after five source-level attempts; the released list sentinel allocation and field initialization reproduced, but the target STL constructor frame and store scheduling did not.
