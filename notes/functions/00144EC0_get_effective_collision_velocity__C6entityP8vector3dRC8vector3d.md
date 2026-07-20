# get_effective_collision_velocity__C6entityP8vector3dRC8vector3d

- Address: `0x00144EC0`
- Size: `0x24` (36 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 10.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an access, aggregate-copy, bool-normalization, or scheduling mismatch.

### Attempt 2 notes

The base entity implementation ignores location and copies the target global zero vector.

## Outcome

The inline base collision-velocity implementation matched exactly.
