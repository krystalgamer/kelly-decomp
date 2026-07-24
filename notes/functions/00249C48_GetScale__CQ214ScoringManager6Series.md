# GetScale__CQ214ScoringManager6Series

- Address: `0x00249C48`
- Size: `0x80` (128 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.7188 | 0.0 | `candidate.cpp` |
| 2 | different | 89.0625 | 65.625 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released series scale matched after preserving the flags register and pinning the late spin and landing lookups to the target registers.

## Outcome

The released scoring-series scale matched exactly on the third attempt.
