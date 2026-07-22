# GetScore__CQ214ScoringManager5Chain

- Address: `0x00249070`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 51.25 | 40.0 | `candidate.cpp` |

### Attempt 1 notes

Initial immutable score-conversion candidate failed compilation because legacy C++ rejected out-of-class declarations used only to attach absolute helper symbols.

### Attempt 2 notes

Moved absolute helper symbol aliases into the class declarations. The candidate then emitted the wrong mangled GetScore symbol, so no target comparison was possible.

### Attempt 3 notes

Forced the exact target symbol and reproduced the score conversion and helper calls. The candidate differed in prologue save scheduling and was 4 bytes short. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced Chain::GetScore arithmetic and helper dispatch but could not match the target's exact prologue save scheduling. No fourth attempt was run.
