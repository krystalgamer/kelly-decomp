# __uninitialized_fill_n_aux__H3ZP8vector3dZUiZ8vector3d_X01X11RCX21G12__false_type_X01

- Address: `0x00111390`
- Size: `0x38` (56 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical old-STL null-guarded placement-fill loop matched exactly after preserving vector3d's memberwise copy-construction semantics.

## Outcome

The released vector3d uninitialized-fill helper matched exactly on the first attempt.
