# remove_me_from_region__12light_sourceP6region

- Address: `0x002CDD58`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.1111 | 11.1111 | `size36-light-region-1.cpp` |
| 2 | different | 11.1111 | 11.1111 | `size36-light-region-2.cpp` |
| 3 | different | 11.1111 | 11.1111 | `size36-light-region-3.cpp` |

## Outcome

All three ordinary forms compile as 16-byte sibling calls instead of the
target 36-byte retained call frame. The barrier-dependent matching body was
removed and the original target function was deferred.
