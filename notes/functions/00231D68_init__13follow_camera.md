# init__13follow_camera

- Address: `0x00231D68`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released initializer sets `first_time` at `0x2D0` and clears `jump_time_elapsed` at `0x304`.

## Outcome

The released `follow_camera::init` state changes matched exactly on the first attempt.
