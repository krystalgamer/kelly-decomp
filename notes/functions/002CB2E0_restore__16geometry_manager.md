# restore__16geometry_manager

- Address: `0x002CB2E0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/geomgr.cpp`
- Reference source: `KS/SRC/geomgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

All three ordinary forms become an eight-byte sibling call. The target retains
a normal 28-byte frame, so the barrier-dependent wrapper was deferred.
