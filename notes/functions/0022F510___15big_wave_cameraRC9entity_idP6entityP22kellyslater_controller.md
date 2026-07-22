# __15big_wave_cameraRC9entity_idP6entityP22kellyslater_controller

- Address: `0x0022F510`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The exact released initializer and body matched immediately.  A shared
source-faithful camera hierarchy now provides the common `game_camera`
constructor and controller member at offset `0x214`; it is also ready for the
following photo-camera constructor.

## Outcome

Matched the released big-wave camera constructor using a shared original-style camera hierarchy.
