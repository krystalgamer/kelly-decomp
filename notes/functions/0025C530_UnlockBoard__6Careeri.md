# UnlockBoard__6Careeri

- Address: `0x0025C530`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.6667 | 6.6667 | `candidate.cpp` |
| 2 | different | 76.6667 | 73.3333 | `candidate.cpp` |
| 3 | different | 75.0 | 66.6667 | `candidate.cpp` |
| 4 | different | 76.6667 | 73.3333 | `candidate.cpp` |
| 5 | different | 76.6667 | 73.3333 | `candidate.cpp` |

### Attempt 1 notes

The literal released board assignment and global unlock call compiled as a 40-byte tail call.

### Attempt 2 notes

The reviewed barrier restored the non-tail 60-byte form, but prologue instructions were scheduled differently from the target.

### Attempt 3 notes

Expressing the selected board through a source pointer changed scheduling without recovering the target order.

### Attempt 4 notes

A local reference to globalCareerData preserved authentic behavior but retained the same 76.67% scheduling mismatch.

### Attempt 5 notes

An explicit source-level call using the released method symbol also retained the mismatch; no authentic form reproduced the target prologue schedule.

## Outcome

Five source-authentic attempts reproduced board unlocking, but isolated old GCC did not reproduce the target prologue schedule.
