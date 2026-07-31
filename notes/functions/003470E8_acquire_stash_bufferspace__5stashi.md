# acquire_stash_bufferspace__5stashi

- Address: `0x003470E8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.4545 | 0.0 | `candidate.cpp` |
| 2 | different | 72.7273 | 14.2857 | `candidate.cpp` |
| 3 | different | 72.7273 | 14.2857 | `candidate.cpp` |
| 4 | different | 63.6364 | 12.5 | `candidate.cpp` |
| 5 | different | 61.3636 | 12.5 | `candidate.cpp` |

### Attempt 1 notes

The initial ascending loop used an incorrect ten-iteration bound and therefore
initialized the countdown to 9. It also kept the decrement in the loop head.

### Attempt 2 notes

Using the released 11-iteration bound recovered the target initial value 10,
but EE GCC placed the decrement in the loop head and left the branch delay slot
empty instead of using the target preheader/backedge schedule. Best byte score:
72.7273%.

### Attempt 3 notes

A non-emitting loop-body barrier produced the same 44-byte candidate and did
not move the decrement into the branch delay slot.

### Attempt 4 notes

The direct countdown `while (i-- >= 0)` introduced a second register to
preserve the post-decrement value and moved farther from the target.

### Attempt 5 notes

The pre-decremented do/while spelling also introduced a second register and
could not reproduce the target single-register preheader/delay-slot schedule.

## Outcome

Five loop spellings could not reproduce the target single-register preheader decrement and backedge delay-slot decrement; best byte score was 72.7273%.
