# __19follow_close_cameraRC9entity_idP6entity

- Address: `0x00232A28`
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

The released constructor uses the shared camera hierarchy, carried old-GCC
vtable alias, and derived `init` call.

## Outcome

The local camera declarations were removed.
