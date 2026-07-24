# get_cur_way_point__C4pathP8vector3dPPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x0034A248`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1667 | 80.0 | `candidate.cpp` |
| 2 | different | 25.0 | 3.3333 | `candidate.cpp` |
| 3 | different | 25.0 | 3.3333 | `candidate.cpp` |
| 4 | different | 94.1667 | 80.0 | `candidate.cpp` |
| 5 | different | 93.3333 | 93.3333 | `candidate.cpp` |

## Outcome

Deferred path::get_cur_way_point after five source-level attempts; the released bounds checks, waypoint copies, and region result reproduced, but the target address-add operand and reload register selection did not.
