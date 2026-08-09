# __12beach_cameraRC9entity_idP6entityP22kellyslater_controller

- Address: `0x0022E718`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released derived constructor uses the shared camera hierarchy and native
auto-camera base construction.

## Outcome

The manual vtable install and symbol wrapper were removed; the released
constructor remains exact.
