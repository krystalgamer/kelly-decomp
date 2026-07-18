# init__16look_back_camera

- Address: `0x00225E70`
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

The released initializer sets the word-sized `first_time` flag at offset `0x30C`.

## Outcome

The released `look_back_camera::init` flag set matched exactly on the first attempt.
