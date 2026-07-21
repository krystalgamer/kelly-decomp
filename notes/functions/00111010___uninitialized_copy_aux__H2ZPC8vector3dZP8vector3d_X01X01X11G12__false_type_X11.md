# __uninitialized_copy_aux__H2ZPC8vector3dZP8vector3d_X01X01X11G12__false_type_X11

- Address: `0x00111010`
- Size: `0x3C` (60 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.3333 | 60.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the canonical old-STL placement-copy loop with a trivial 12-byte vector. The loop shape matched, but aggregate copying used unaligned integer load/store pairs instead of the released scalar floating copies.

### Attempt 2 notes

Restored vector3d's memberwise float copy constructor within the canonical old-STL placement-copy loop. This reproduced the released scalar floating load/store sequence and matched all 60 bytes.

## Outcome

The canonical old-STL uninitialized-copy loop matches exactly when vector3d uses its authentic memberwise floating copy constructor.
