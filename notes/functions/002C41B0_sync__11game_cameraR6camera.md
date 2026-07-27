# sync__11game_cameraR6camera

- Address: `0x002C41B0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.5833 | 98.3333 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-round2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate-round3.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate-round4.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate-round5.cpp` |

### Attempt 2 notes

Matched after preserving the canonical signed camera flags field and the target identity-transform binding.

## Outcome

Matched the exact game-camera synchronization using the canonical signed external-control flags, camera base call, state resets, and identity transform copy.
