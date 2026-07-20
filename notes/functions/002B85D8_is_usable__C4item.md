# is_usable__C4item

- Address: `0x002B85D8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `item.h`
- Reference source: `KS/SRC/item.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal vtable layout preserves the virtual usability slot and positive-result normalization.

## Outcome

The released item usability wrapper matched exactly.
