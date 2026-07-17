# get_flavor__C6entity

- Address: `0x00144FC0`
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

The entity flavor enum is stored at object offset `0x7C`. Returning the enum
member reproduced the target word load.

## Outcome

The entity flavor enum is stored at object offset 0x7C. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
