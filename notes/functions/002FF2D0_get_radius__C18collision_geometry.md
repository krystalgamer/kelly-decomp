# get_radius__C18collision_geometry

- Address: `0x002FF2D0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal owner and old-GCC entity-vtable layout preserves the released inline call to `owner->get_radius()`.

## Outcome

The released `collision_geometry::get_radius` thunk matched exactly on the first attempt.
