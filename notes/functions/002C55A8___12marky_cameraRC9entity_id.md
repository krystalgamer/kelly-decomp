# __12marky_cameraRC9entity_id

- Address: `0x002C55A8`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.6207 | 24.1379 | `candidate.cpp` |
| 2 | different | 39.6552 | 20.6897 | `candidate.cpp` |
| 3 | different | 51.7241 | 27.5862 | `candidate.cpp` |
| 4 | different | 55.1724 | 51.7241 | `candidate.cpp` |
| 5 | different | 67.2414 | 48.2759 | `candidate.cpp` |

## Outcome

Deferred marky-camera construction after five source-level attempts; the released base call, target vector, collision/roll fields, priority reset, and vtable reproduced, but the target vector-assignment scheduling did not.
