# init__10fps_camera

- Address: `0x0022C258`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 93.3333 | 86.6667 | `0022C258.cpp` |
| 3 | different | 93.3333 | 86.6667 | `size60-fps-base.cpp` |

### Attempt 1 notes

Reconstructed the target's source-level conditional controller check and zero-roll virtual call with recovered game-camera controller, vtable, and camera_set_roll slot layouts. All 60 bytes matched.

### Attempt 2 notes

The clean shared `fps_camera` form preserves the controller check and size,
but the incomplete shared entity hierarchy places `camera_set_roll` at slot
`0x45c` instead of the target slot `0x7c`.

### Attempt 3 notes

Dispatching through an explicit shared `entity` base retains the same slot
mismatch.

## Outcome

The manual camera vtable was removed and the initializer was deferred until
the shared entity hierarchy reaches the released virtual slot.
