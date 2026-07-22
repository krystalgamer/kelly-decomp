# SetGoalDone__Q26Career5Leveli

- Address: `0x0025C428`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.75 | 0.0 | `candidate.cpp` |
| 2 | different | 13.75 | 0.0 | `candidate.cpp` |
| 3 | different | 13.75 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Implemented SetGoalDone with goal-array lookup, unsaved flag, set-to-one, and is_new clearing. Initial Level layout placed goals at offset 12 instead of immutable offset 16.

### Attempt 2 notes

Corrected goals to offset 16 and matched the goal-index arithmetic, but the direct global unsaved symbol was optimized differently from the immutable career-data address sequence.

### Attempt 3 notes

Modeled the career-data base and preserved a self pointer, but the legacy compiler still folded the global access and omitted the target register/address sequence. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced SetGoalDone goal indexing and state updates but could not match the immutable career-data global access and register sequence. No fourth attempt was run.
