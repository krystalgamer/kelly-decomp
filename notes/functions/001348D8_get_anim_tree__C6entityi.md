# get_anim_tree__C6entityi

- Address: `0x001348D8`
- Size: `0x40` (64 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.8824 | 41.1765 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A bool helper normalized the attachment mask and emitted 68 bytes.

### Attempt 2 notes

Preserving the released raw attachment flag mask matches exactly.

## Outcome

The released animation-slot lookup matches exactly when preserving the raw attachment flag mask.
