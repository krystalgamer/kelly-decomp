# FindNearestObject__11auto_camera

- Address: `0x0022C8D8`
- Size: `0xE0` (224 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.5484 | 25.8065 | `candidate.cpp` |
| 2 | different | 43.5484 | 25.8065 | `candidate.cpp` |
| 3 | different | 18.2203 | 3.3898 | `candidate.cpp` |
| 4 | different | 33.4615 | 12.3077 | `candidate.cpp` |
| 5 | different | 43.5484 | 25.8065 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. Reusing the camera subsystem context confirmed the exact released body and offsets, but the same legacy vector3d copy-elision mismatch adds six instructions and expands the frame from 0x60 to 0x70.
