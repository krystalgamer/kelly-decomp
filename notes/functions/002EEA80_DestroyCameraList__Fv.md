# DestroyCameraList__Fv

- Address: `0x002EEA80`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 22.2222 | `size36-destroy-camera-1.cpp` |
| 2 | different | 22.2222 | 22.2222 | `size36-destroy-camera-2.cpp` |
| 3 | different | 22.2222 | 22.2222 | `size36-destroy-camera-3.cpp` |

## Outcome

All three ordinary forms compile as 12-byte sibling calls instead of the
target 36-byte retained call frame. The barrier-dependent matching body was
removed and the original target function was deferred.
