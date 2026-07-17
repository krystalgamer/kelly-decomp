# is_a_limb_body__C6entity

- Address: `0x00145028`
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

The released base entity predicate returns `false`. The guarded constant-return candidate matched on the first attempt.

## Outcome

The released base entity predicate returns false. The first candidate matched exactly and preserved the byte-identical integrated ROM.
