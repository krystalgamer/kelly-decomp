# init__10fps_camera

- Address: `0x0022C258`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the target's source-level conditional controller check and zero-roll virtual call with recovered game-camera controller, vtable, and camera_set_roll slot layouts. All 60 bytes matched.

## Outcome

The FPS camera initializer exactly matches its conditional controller check and virtual zero-roll reset with recovered layouts.
