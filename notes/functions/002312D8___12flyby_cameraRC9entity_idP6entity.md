# __12flyby_cameraRC9entity_idP6entity

- Address: `0x002312D8`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.4286 | 46.4286 | `candidate.cpp` |
| 2 | different | 77.6786 | 67.8571 | `candidate.cpp` |
| 3 | different | 83.0357 | 75.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the released flyby constructor, game_camera inheritance, terrain lookup, PanelAnimFile allocation, and exact member layouts. Preserving the released global/vtable register roles matched on attempt 4.

## Outcome

Matched flyby camera constructor
