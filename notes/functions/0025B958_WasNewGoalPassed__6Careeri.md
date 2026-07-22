# WasNewGoalPassed__6Careeri

- Address: `0x0025B958`
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

The exact released loop was tested with career_shared extended to the target new_goal_passed and goal_passed offsets. It matched all behavior and data access but compiled to 68 bytes, omitting the target scheduler nop after slti.

### Attempt 2 notes

A loop-body compiler barrier restored 72 bytes but moved the index increment out of the target branch delay slot.

### Attempt 3 notes

A do/while form with a post-increment barrier produced 76 bytes and a different loop schedule.

### Attempt 4 notes

An inlined source helper that barriers the computed loop condition also produced 76 bytes with a different CFG.

### Attempt 5 notes

An explicit while loop normalized to the same 68-byte schedule as the released for loop.

## Outcome

Deferred after five source attempts. The source-faithful loop differs only by an unexplained target scheduler nop; allowed barriers could not place it without changing other scheduling.
