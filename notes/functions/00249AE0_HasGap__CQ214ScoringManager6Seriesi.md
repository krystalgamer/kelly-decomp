# HasGap__CQ214ScoringManager6Seriesi

- Address: `0x00249AE0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

No released HasGap body exists in the snapshot, so the originating scoringmanager translation unit, nested Trick/Series declarations, and target-era STL list node pattern were inspected first. The source-faithful iterator loop over TYPE_GAP entries matched exactly on attempt one.

## Outcome

Matched exactly with a reconstructed original-style nested scoring declaration and target STL list iterator pattern.
