# init__11auto_camera

- Address: `0x0026F170`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.0 | 80.0 | `size40-camera-family.cpp` |
| 2 | different | 90.0 | 80.0 | `size40-camera-family-2.cpp` |
| 3 | different | 90.0 | 80.0 | `size40-camera-family-3.cpp` |

## Outcome

Across three native definitions, the shared camera hierarchy still lacks enough released virtual declarations to place `Reset` at the target slot. The manual-vtable implementation
was removed and the target function was deferred until the shared base camera
hierarchy can generate it naturally.
