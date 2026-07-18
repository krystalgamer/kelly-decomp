# camera_get_target__12marky_camera

- Address: `0x002C69B0`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target aggregate return constructs a zero vector in the hidden result object.

## Outcome

The target `marky_camera::camera_get_target` zero aggregate return matched exactly on the first attempt.
