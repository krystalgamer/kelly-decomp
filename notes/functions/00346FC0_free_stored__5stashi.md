# free_stored__5stashi

- Address: `0x00346FC0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.2727 | 27.2727 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wrapper indexes the 0x318-byte substash array and calls
`multistash::free_stored`. The carried global alias reproduces the negative-low
address, and the trailing empty barrier preserves the normal call frame.

Re-evaluating the identical second candidate after the exact wrapper-schedule compiler fixup now produces an exact match; this infrastructure recheck does not consume a third source attempt.

## Outcome

The released stash::free_stored wrapper matched exactly after correcting the isolated compiler instruction order.
