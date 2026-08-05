# add_marker__21world_dynamics_systemP6marker

- Address: `0x002A3408`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 22.2222 | `size36-wds-add-1.cpp` |
| 2 | different | 22.2222 | 22.2222 | `size36-wds-add-2.cpp` |
| 3 | different | 22.2222 | 22.2222 | `size36-wds-add-3.cpp` |

## Outcome

All three ordinary forms of the released void forward compile as 12-byte
sibling calls instead of the target 36-byte retained call frame. The
return-type and barrier matching shim was removed, and the target was deferred.
