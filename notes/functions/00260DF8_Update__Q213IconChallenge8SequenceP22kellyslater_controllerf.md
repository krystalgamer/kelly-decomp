# Update__Q213IconChallenge8SequenceP22kellyslater_controllerf

- Address: `0x00260DF8`
- Size: `0xD4` (212 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.7925 | 45.283 | `candidate.cpp` |
| 2 | different | 55.1887 | 39.6226 | `candidate.cpp` |
| 3 | different | 67.9245 | 54.717 | `candidate.cpp` |
| 4 | different | 83.0189 | 58.4906 | `candidate.cpp` |
| 5 | different | 83.0189 | 58.4906 | `candidate.cpp` |

### Attempt 1 notes

The exact released loops reproduced the layout and control flow, but GCC retained the first loop's task count and scheduled the conditional increment before the backedge.

### Attempt 2 notes

Broad loop barriers disturbed the matching first-loop call schedule without recovering the completion loop.

### Attempt 3 notes

A narrow memory barrier recovered the target task-count reload and improved the score to 67.9245%.

### Attempt 4 notes

Pinned the complete second-loop state and recovered target size, but changed the saved-register assignment. Score reached 83.0189%.

### Attempt 5 notes

Restricted pinning to the target task-count registers, but the compiler retained the altered saved-register assignment and the same 83.0189% score.

## Outcome

The exact released task-update and completion loops used the recovered 16-byte Task and 168-byte Sequence layouts. Five candidates could not reproduce the target task-count reload, saved-register assignment, and conditional-increment backedge schedule; best byte score was 83.0189%.
