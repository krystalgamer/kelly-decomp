# __as__Q214ScoringManager5ChainRCQ214ScoringManager5Chain

- Address: `0x002495D0`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 47.5 | 20.0 | `candidate.cpp` |
| 3 | different | 48.75 | 20.0 | `candidate.cpp` |

### Attempt 1 notes

Initial Chain assignment modeled self-guard, series list assignment helper, multAdder copy, and return. The candidate emitted the ordinary mangled symbol rather than the authoritative target alias.

### Attempt 2 notes

Forced the exact assignment symbol and reproduced the helper/list and float-copy operations, but register roles for destination/source were reversed relative to the immutable target.

### Attempt 3 notes

Reversed the self-guard comparison to influence destination/source register allocation; the legacy compiler retained the opposite roles and still differed. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced Chain assignment behavior and helper calls but could not match the target destination/source register allocation around the self guard and list assignment. No fourth attempt was run.
