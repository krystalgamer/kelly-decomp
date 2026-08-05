# GetStartPosition__11game_camera

- Address: `0x002FEDA8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `camera.h`
- Reference source: `KS/SRC/camera.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-collision-camera.cpp` |

## Outcome

The shared `vector3d` declaration naturally emits the released scalar copy
from `ZEROVEC`.
