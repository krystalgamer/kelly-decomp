# GetPartialRawScores__CQ214ScoringManager6SeriesRiN21

- Address: `0x00249848`
- Size: `0x194` (404 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released ScoringManager::Series::GetPartialRawScores body with minimum source-faithful trick-list, scoring, and global trick declarations. It reproduced all 404 target bytes and all 101 instructions.

## Outcome

The exact released partial raw-score calculation and source-faithful declarations reproduce all 404 target bytes.
