# get_min_extent__C18collision_geometryP8vector3d

- Address: `0x002FF338`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 25.0 | `candidate.cpp` |
| 2 | different | 92.5 | 70.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The implicit POD assignment used 64-bit aggregate copies and expanded the function to 48 bytes.

### Attempt 2 notes

Scalar assignment removed the aggregate copy, but EE GCC reordered the independent component stores to y/z/x instead of the target z/x/y sequence.

### Attempt 3 notes

The released default extent writes a temporary zero vector to the output. Matching-only empty barriers emit no instructions and preserve the target z/x/y scalar store schedule.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `collision_geometry::get_min_extent` implementation matched exactly.
