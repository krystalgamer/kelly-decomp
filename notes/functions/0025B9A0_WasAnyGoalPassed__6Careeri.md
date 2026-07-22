# WasAnyGoalPassed__6Careeri

- Address: `0x0025B9A0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.8333 | 33.3333 | `candidate.cpp` |
| 2 | different | 87.5 | 83.3333 | `candidate.cpp` |
| 3 | different | 34.2105 | 21.0526 | `candidate.cpp` |
| 4 | different | 23.6842 | 10.5263 | `candidate.cpp` |
| 5 | different | 45.8333 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

The exact released goal_passed loop reused career_shared and produced the same 68-byte schedule as WasNewGoalPassed, missing only the target nop after slti.

### Attempt 2 notes

A loop-body barrier restored target size but displaced the index increment from the branch delay slot.

### Attempt 3 notes

A do/while form with a post-increment barrier produced a different 76-byte loop.

### Attempt 4 notes

An inline condition helper with a normalized barrier also produced 76 bytes and a different CFG.

### Attempt 5 notes

An explicit while loop normalized back to the same 68-byte schedule as released source.

## Outcome

Deferred after five attempts for the same target-only scheduler nop as the adjacent new-goal query; no allowed source form placed it without disturbing the loop.
