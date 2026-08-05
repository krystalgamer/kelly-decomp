# _$_19old_shoulder_camera

- Address: `0x00228D38`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-camera-dtors.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-camera-dtors-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-camera-dtors-3.cpp` |

## Outcome

All three native empty destructors emit 20-byte vptr-setting tail calls instead
of the target 40-byte direct base-destructor frame. The manual-vtable body was
removed and the target function was deferred.
