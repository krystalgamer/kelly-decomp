# _$_15big_wave_camera

- Address: `0x0026F318`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-camera-family.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-camera-family-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-camera-family-3.cpp` |

## Outcome

Across three native definitions, the compiler-generated empty destructor collapses to a 20-byte vptr-setting tail call. The manual-vtable implementation
was removed and the target function was deferred until the shared base camera
hierarchy can generate it naturally.
