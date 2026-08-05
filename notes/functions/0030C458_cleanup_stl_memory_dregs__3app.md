# cleanup_stl_memory_dregs__3app

- Address: `0x0030C458`
- Size: `0x24` (36 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/app.cpp`
- Reference source: `KS/SRC/app.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 22.2222 | `size36-app-cleanup-1.cpp` |
| 2 | different | 22.2222 | 22.2222 | `size36-app-cleanup-2.cpp` |
| 3 | different | 22.2222 | 22.2222 | `size36-app-cleanup-3.cpp` |

## Outcome

All three ordinary forms compile as 12-byte sibling calls instead of the
target 36-byte retained call frame. The barrier-dependent matching body was
removed and the original target function was deferred.
