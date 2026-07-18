# split_xform__18collision_geometryRC2poT1i

- Address: `0x002FF2C0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base overload contains only an assertion, removed in the final build.

## Outcome

The final-build empty two-transform `collision_geometry::split_xform` overload matched exactly on the first attempt.
