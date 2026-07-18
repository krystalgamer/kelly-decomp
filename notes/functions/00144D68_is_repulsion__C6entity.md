# is_repulsion__C6entity

- Address: `0x00144D68`
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

The released accessor tests the repulsion flag at bit 12 of the word at offset `0x78`.

## Outcome

The released `entity::is_repulsion` bit test matched exactly on the first attempt.
