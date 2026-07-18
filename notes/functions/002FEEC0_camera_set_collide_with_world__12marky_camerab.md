# camera_set_collide_with_world__12marky_camerab

- Address: `0x002FEEC0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `camera.h`
- Reference source: `KS/SRC/camera.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the word-sized `do_collide_with_world` flag at offset `0x2E0`.

## Outcome

The released `marky_camera::camera_set_collide_with_world` setter matched exactly on the first attempt.
