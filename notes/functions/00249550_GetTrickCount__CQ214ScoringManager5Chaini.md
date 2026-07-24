# GetTrickCount__CQ214ScoringManager5Chaini

- Address: `0x00249550`
- Size: `0x74` (116 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.8966 | 17.2414 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released series-list traversal and Series::GetTrickCount call. Re-evaluating the released series end iterator each loop matched on attempt 2.

## Outcome

Matched scoring chain trick counting
