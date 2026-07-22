# StartNewRun__6Career

- Address: `0x0025AE80`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2273 | 9.0909 | `candidate.cpp` |
| 2 | different | 57.1429 | 52.381 | `candidate.cpp` |
| 3 | different | 39.2857 | 14.2857 | `candidate.cpp` |

### Attempt 1 notes

Implemented StartNewRun clearing the three five-entry per-run arrays and setting three unlock markers to -1. Initial direct offsets reproduced behavior but differed in pointer formation and marker addressing.

### Attempt 2 notes

Rebased the first array as goals[-5] and unlock markers from a 0x10000 base, reproducing the target loop pointer setup and offsets. Loop increment delay-slot and marker store ordering remained different.

### Attempt 3 notes

Tried a decrementing while-loop and reordered marker assignments. The compiler produced a different loop shape and still did not match the immutable target. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced Career::StartNewRun array clearing and unlock-marker offsets, but could not match the target loop increment delay-slot and marker store ordering. No fourth attempt was run.
