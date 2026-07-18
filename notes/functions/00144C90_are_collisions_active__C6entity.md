# are_collisions_active__C6entity

- Address: `0x00144C90`
- Size: `0x10` (16 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor tests the collision-active flag at bit 1 of the word at offset `0x78`.

## Outcome

The released `entity::are_collisions_active` bit test matched exactly on the first attempt.
