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
| 1 | matched | 100.0 | 100.0 | `size44-shared-accessors.cpp` |

### Attempt 1 notes

The shared collision and entity declarations preserve the released virtual
call to `owner->get_radius()`.

## Outcome

The manual vtable layout was removed.
