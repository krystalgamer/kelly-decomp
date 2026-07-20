# get_closest_point_along_dir__C7cg_noneP8vector3dRC8vector3d

- Address: `0x002FF430`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate combined an uncarried negative-low global address with a 64-bit aggregate vector copy.

### Attempt 2 notes

The no-collision implementation ignores direction and copies its target global zero vector.

## Outcome

The inline `cg_none::get_closest_point_along_dir` implementation matched exactly.
