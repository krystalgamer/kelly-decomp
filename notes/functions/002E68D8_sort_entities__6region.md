# sort_entities__6region

- Address: `0x002E68D8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

All three ordinary forms tail-call the bounding-box sorter. The target retains
a 28-byte call frame, so the artificial wrapper was removed.
