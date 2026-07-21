# __11buoy_cameraRC9entity_idP6entity

- Address: `0x00233B70`
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

The released base game_camera construction, compiler-generated buoy_camera vtable install, and virtual init call matched all 60 bytes with the recovered old-GCC vtable symbol.

## Outcome

The released buoy camera constructor exactly matches base construction, old-GCC vtable installation, and initialization.
