# is_stationary__C6entity

- Address: `0x00144CE0`
- Size: `0x14` (20 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor negates the moving flag at bit 2 of the signed flags word at offset `0x78`.

## Outcome

The released `entity::is_stationary` bit predicate matched exactly on the first attempt.
