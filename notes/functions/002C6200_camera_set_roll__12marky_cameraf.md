# camera_set_roll__12marky_cameraf

- Address: `0x002C6200`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter assigns `roll` at offset `0x2DC`.

## Outcome

The released `marky_camera::camera_set_roll` setter matched exactly on the first attempt.
