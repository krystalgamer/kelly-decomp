# xform__7cg_noneRC2po

- Address: `0x002DC2B8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

Three ordinary forms all tail-call `collision_geometry::xform`. The target
uses a 28-byte call frame, so the former barrier-dependent match was removed.
