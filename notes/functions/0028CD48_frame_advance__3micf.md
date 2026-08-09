# frame_advance__3micf

- Address: `0x0028CD48`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/mic.cpp`
- Reference source: `KS/SRC/mic.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.6875 | 12.5 | `candidate.cpp` |
| 2 | different | 32.8125 | 12.5 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Aggregate vector assignment became a compact integer block copy and did not match the released floating-point component copy.

### Attempt 2 notes

Explicit components used floating-point copies but retained large this-relative destinations and a shorter function.

### Attempt 3 notes

The shared mic/entity hierarchy and explicit source/destination vector
pointers preserve the released position copy. A local base-advance pointer
keeps the framed call.

## Outcome

The local entity, position-source, and mic layouts were removed.
