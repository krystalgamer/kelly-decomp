# start__12flyby_camera

- Address: `0x00231CF0`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets the word-sized `is_playing` flag at offset `0x2D4`.

## Outcome

The released `flyby_camera::start` flag set matched exactly on the first attempt.
