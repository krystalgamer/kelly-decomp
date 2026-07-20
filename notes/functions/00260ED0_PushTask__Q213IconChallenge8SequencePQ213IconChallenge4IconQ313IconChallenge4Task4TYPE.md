# PushTask__Q213IconChallenge8SequencePQ213IconChallenge4IconQ313IconChallenge4Task4TYPE

- Address: `0x00260ED0`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.8462 | 0.0 | `candidate.cpp` |
| 2 | different | 92.3077 | 84.6154 | `candidate.cpp` |
| 3 | different | 26.9231 | 7.6923 | `candidate.cpp` |
| 4 | different | 44.2308 | 38.4615 | `candidate.cpp` |
| 5 | different | 28.8462 | 7.6923 | `candidate.cpp` |

### Attempt 1 notes

Used the released post-incremented task selection and Init call. EE GCC converted Init into a sibling tail jump, eliminating the target frame and producing 32 bytes.

### Attempt 2 notes

Added a trailing empty barrier to preserve the Init call and frame. All instructions matched except EE GCC scheduled the task-base `addiu` before incrementing numTasks; the target uses the reverse order. Score: 92.31%.

### Attempt 3 notes

Expanded the post-increment into explicit index and numTasks assignments. The compiler stopped preserving `this` in v1, stored numTasks before the call, and emitted 48 bytes with a substantially different schedule.

### Attempt 4 notes

Staged the post-incremented index through an empty input barrier before indexing the task array. This retained 52 bytes but changed register allocation and moved the numTasks store out of the call delay slot.

### Attempt 5 notes

Expressed the equivalent operation as preincrement-minus-one indexing. EE GCC again stored numTasks before the call and produced 48 bytes without the target register schedule.

## Outcome

Five source spellings could not reproduce the target numTasks increment/task-base instruction order while preserving the Init call delay-slot store.
