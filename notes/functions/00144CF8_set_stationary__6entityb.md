# set_stationary__6entityb

- Address: `0x00144CF8`
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

The released inline setter stores stationary as the inverse of the moving flag.

## Outcome

The released `entity::set_stationary` implementation matched exactly.
