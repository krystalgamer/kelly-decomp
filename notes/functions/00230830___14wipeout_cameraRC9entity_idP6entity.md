# __14wipeout_cameraRC9entity_idP6entity

- Address: `0x00230830`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base construction, collision/previous camera initialization, and compiler-generated wipeout_camera vtable install matched exactly with recovered member offsets and old-GCC vtable symbol.

## Outcome

The released wipeout_camera constructor exactly matches base construction, old-GCC vtable installation, and collision/previous camera initialization.
