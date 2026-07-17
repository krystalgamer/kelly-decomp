# get_region__C6entity

- Address: `0x00145130`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The center-region pointer is stored at entity offset `0x15C`. Returning that
member reproduced the target load.

## Outcome

The center-region pointer is stored at entity offset 0x15C. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
