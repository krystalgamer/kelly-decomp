# __12photo_cameraRC9entity_idP6entityP22kellyslater_controller

- Address: `0x002351D8`
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

The exact released initializer and body matched immediately by reusing the
shared `camera`/`game_camera` hierarchy created for the preceding constructor.
Only the source-authentic derived class and its existing vtable/init bindings
were required.

## Outcome

Matched the released photo-camera constructor by reusing the shared original-style camera hierarchy.
