# is_usable__C4item

- Address: `0x002B85D8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `item.h`
- Reference source: `KS/SRC/item.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 90.9091 | 81.8182 | `candidate.cpp` |
| 3 | different | 90.9091 | 81.8182 | `candidate.cpp` |

### Attempt 1 notes

The isolated vtable layout matched, but the shared entity hierarchy still
lacks enough released virtual declarations to place `get_count` at slot
0x628.

### Attempt 2 notes

The shared item declaration dispatches `get_count` at the current incomplete
slot 0x550.

### Attempt 3 notes

An explicitly qualified shared-source form retains the same slot mismatch.

## Outcome

The manual vtable layout was removed and the function was deferred until the
shared hierarchy reaches the released slot.
