# get_effective_collision_mass__C6entityRC8vector3dT1

- Address: `0x00144EE8`
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

With assertions removed, the released base collision-mass hook returns zero.

## Outcome

The released `entity::get_effective_collision_mass` zero float matched exactly on the first attempt.
