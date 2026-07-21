# UnlockTrick__6Careeri

- Address: `0x0025C570`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.6667 | 6.6667 | `candidate.cpp` |
| 2 | different | 75.0 | 66.6667 | `candidate.cpp` |
| 3 | different | 73.3333 | 60.0 | `candidate.cpp` |
| 4 | different | 75.0 | 66.6667 | `candidate.cpp` |
| 5 | different | 75.0 | 66.6667 | `candidate.cpp` |

### Attempt 1 notes

The literal released learned-trick assignment and global unlock call compiled as a 40-byte tail call.

### Attempt 2 notes

The reviewed barrier restored the non-tail form, but old GCC scheduled the prologue differently from the target.

### Attempt 3 notes

A source pointer for the selected learned-trick element changed scheduling without recovering the target.

### Attempt 4 notes

A local globalCareerData reference preserved behavior but retained the same prologue mismatch.

### Attempt 5 notes

An explicit source-level released-symbol call also retained the mismatch; no authentic form reproduced the target schedule.

## Outcome

Five source-authentic attempts reproduced trick unlocking, but isolated old GCC did not reproduce the target prologue schedule.
