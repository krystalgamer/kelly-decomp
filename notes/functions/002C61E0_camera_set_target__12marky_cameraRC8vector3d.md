# camera_set_target__12marky_cameraRC8vector3d

- Address: `0x002C61E0`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 12.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The POD vector assignment used a 64-bit aggregate copy instead of the target scalar float sequence.

### Attempt 2 notes

A minimal layout places the camera target at offset 0x2d0 and preserves the three-float assignment.

## Outcome

The released `marky_camera::camera_set_target` setter matched exactly.
