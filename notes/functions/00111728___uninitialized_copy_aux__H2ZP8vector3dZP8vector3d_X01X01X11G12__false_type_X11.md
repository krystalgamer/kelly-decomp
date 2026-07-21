# __uninitialized_copy_aux__H2ZP8vector3dZP8vector3d_X01X01X11G12__false_type_X11

- Address: `0x00111728`
- Size: `0x3C` (60 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical old-STL placement-copy loop with vector3d's memberwise floating copy constructor matched the mutable-pointer instantiation exactly on the first attempt.

## Outcome

The mutable-pointer old-STL uninitialized-copy instantiation matches exactly with the authentic memberwise vector3d copy constructor.
