# __7triggerRC7stringx

- Address: `0x0028D838`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.5849 | 16.9811 | `candidate.cpp` |
| 2 | different | 80.1887 | 60.3774 | `candidate.cpp` |
| 3 | different | 63.6792 | 45.283 | `candidate.cpp` |
| 4 | different | 48.1132 | 22.6415 | `candidate.cpp` |
| 5 | different | 44.8113 | 20.7547 | `candidate.cpp` |

### Attempt 1 notes

The released constructor model exposed the target's older trigger layout and allocator-temporary behavior, but used the wrong base size and no comparator stack temporary.

### Attempt 2 notes

Recovered all field offsets, the comparator temporary, and the custom free-list allocation. The frame, vtable placement, and allocation schedule still differed; best score was 80.1887%.

### Attempt 3 notes

Recovered the exact 96-byte frame, vtable address, and prologue through the free-list branch, but the stack-reservation constraint prevented the target epilogue interleave.

### Attempt 4 notes

An aligned comparator and pinned allocator registers changed register allocation globally and lost the matching prologue.

### Attempt 5 notes

A padded comparator temporary and base free-list pointer did not preserve the target frame or allocation schedule.

## Outcome

The released trigger constructor required the older no-whodunnit layout, aligned signaller tail padding, one comparator temporary, and the custom 24-byte free-list allocator. Five candidates could not reproduce the complete allocator and epilogue schedule; best byte score was 80.1887%.
