# __16wipeout_camera_2RC9entity_idP6entity

- Address: `0x0022FD78`
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

The released base construction, previous-camera/wave-hint initialization, and compiler-generated wipeout_camera_2 vtable install matched exactly with recovered field offsets and old-GCC vtable symbol.

## Outcome

The released wipeout_camera_2 constructor exactly matches base construction, old-GCC vtable installation, and member initialization.
