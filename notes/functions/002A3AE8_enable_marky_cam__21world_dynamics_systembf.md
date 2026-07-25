# enable_marky_cam__21world_dynamics_systembf

- Address: `0x002A3AE8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.2609 | 39.1304 | `candidate.cpp` |
| 2 | different | 26.087 | 13.0435 | `candidate.cpp` |
| 3 | different | 82.6087 | 71.7391 | `candidate.cpp` |
| 4 | different | 66.3043 | 52.1739 | `candidate.cpp` |
| 5 | different | 82.6087 | 71.7391 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released Marky-camera gate, priority fields, world offsets, and `camera -> game_camera -> marky_camera` inheritance. The closest source-faithful candidate recovered all control flow and data accesses, but the reconstructed shared entity hierarchy does not yet contain the roughly 140-entry released entity/camera virtual prefix needed for the `camera_set_roll` slot, and the target also has a compiler-only FPU hazard nop. Policy forbids a surrogate vtable or handwritten nop, so the shared experiment was reverted.

## Outcome

Deferred Marky camera enabling after five source-level attempts could not reproduce the full released camera vtable prefix and target-only hazard nop.
