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
| 1 | matched | 100.0 | 100.0 | `size40-colgeom-accessors.cpp` |

## Outcome

The shared released `vector3d` assignment naturally emits the target temporary
and z/x/y store schedule.
