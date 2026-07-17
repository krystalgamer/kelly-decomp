# get_shadow_mesh__C6entity

- Address: `0x00144F78`
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

The shadow mesh pointer is stored at entity offset `0x12C`. Returning that
member matched on the first candidate.

## Outcome

The shadow mesh pointer is stored at entity offset 0x12C. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
