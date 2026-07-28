# collide_polygon_polygon__FPC5cfacePC7cg_meshT0T1R8vector3d

- Address: `0x002DCEF0`
- Size: `0x190` (400 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released collide_polygon_polygon body from kelly-slaters-pro-surfer/KS/SRC/collide.cpp:527-549 with minimum source-faithful declarations from cface.h, colmesh.h, and vert.h. It reproduced all 400 target bytes and all 100 instructions.

## Outcome

The exact released polygon-polygon collision body and source-faithful declarations reproduce all 400 target bytes.
