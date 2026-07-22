# ClearAllGoals__6Career

- Address: `0x0025AA20`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 5.5556 | `candidate.cpp` |
| 2 | different | 18.75 | 5.5556 | `candidate.cpp` |
| 3 | different | 18.75 | 5.5556 | `candidate.cpp` |

### Attempt 1 notes

Implemented Career::ClearAllGoals over 32 Level entries with ResetGoals dispatch. Initial Level model had size 1, producing a +1 loop stride instead of immutable 36-byte Level stride.

### Attempt 2 notes

Corrected Level size to 36 bytes, reproducing the target pointer stride and loop body. The candidate remained 16 bytes shorter because the target contains preserved scheduling nops around the loop branch.

### Attempt 3 notes

Tried the project compiler barrier inside the loop; the legacy compiler did not preserve the target nops and the body remained different. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced Career::ClearAllGoals Level layout, ResetGoals dispatch, and 36-byte iteration stride, but could not reproduce the target's preserved loop scheduling nops. No fourth attempt was run.
