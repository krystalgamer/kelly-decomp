# invalidate_colgeom__6entity

- Address: `0x001335C0`
- Size: `0x54` (84 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.4762 | 80.9524 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released invalidate_colgeom body and relevant entity/collision_geometry declarations. Reconstructed the shared entity virtual-dispatch slot at 0x1b8/0x1bc and the released inline validity clear.

## Outcome

Matched released entity::invalidate_colgeom body
