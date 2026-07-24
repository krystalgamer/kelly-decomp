# __11auto_cameraRC9entity_idP6entityP22kellyslater_controller

- Address: `0x0022C7A0`
- Size: `0x68` (104 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 54.8077 | 42.3077 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact game-camera base construction, auto-camera vtable, delta vector assignment, and controller member offset. The source-faithful component assignment and negative-low vtable encoding matched on attempt 3.

## Outcome

Matched auto camera constructor
