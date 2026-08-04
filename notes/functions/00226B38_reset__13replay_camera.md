# reset__13replay_camera

- Address: `0x00226B38`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared replay-camera declaration preserves the released state fields and
recovered enum values.

## Outcome

The exact reset implementation matches without a local class shell.
