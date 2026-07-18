# GetCameraType__12beach_camera

- Address: `0x0026F2C0`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method returns `BEACH_CAM2`, whose target value is `1`.

## Outcome

The released `beach_camera::GetCameraType` constant matched exactly on the first attempt.
