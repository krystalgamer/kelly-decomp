# __19old_shoulder_cameraRC9entity_idP6entity

- Address: `0x00228CB8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.3226 | 64.5161 | `candidate.cpp` |
| 2 | different | 49.1935 | 29.0323 | `candidate.cpp` |
| 3 | different | 25.0 | 16.129 | `candidate.cpp` |
| 4 | different | 62.9032 | 32.2581 | `candidate.cpp` |
| 5 | different | 88.7097 | 58.0645 | `candidate.cpp` |

## Outcome

Deferred old_shoulder_camera constructor after five source-level attempts; the released base construction, vtable, flags, and two zero-vector copies reproduced at 90%, but the target vector copy register and load scheduling did not.
