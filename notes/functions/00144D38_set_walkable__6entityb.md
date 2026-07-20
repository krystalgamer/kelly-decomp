# set_walkable__6entityb

- Address: `0x00144D38`
- Size: `0x2C` (44 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline setter toggles the walkable bit in the entity flags word.

## Outcome

The released `entity::set_walkable` implementation matched exactly.
