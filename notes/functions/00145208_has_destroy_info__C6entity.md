# has_destroy_info__C6entity

- Address: `0x00145208`
- Size: `0xC` (12 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate tests the `destroy_info` pointer at offset `0x19C` for non-null.

## Outcome

The released `entity::has_destroy_info` pointer predicate matched exactly on the first attempt.
