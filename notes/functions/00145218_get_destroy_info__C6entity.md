# get_destroy_info__C6entity

- Address: `0x00145218`
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

The destroyable-info pointer is stored at entity offset `0x19C`. Returning
that member matched the target load.

## Outcome

The destroyable-info pointer is stored at entity offset 0x19C. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
