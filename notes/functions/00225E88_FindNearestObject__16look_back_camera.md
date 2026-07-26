# FindNearestObject__16look_back_camera

- Address: `0x00225E88`
- Size: `0xE0` (224 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 42.7419 | 24.1935 | `candidate.cpp` |
| 3 | different | 43.1452 | 25.8065 | `candidate.cpp` |
| 4 | different | 43.1452 | 25.8065 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact released look-back camera body reproduces the verified object offsets and calls, but legacy GCC emits an extra vector3d argument copy, increasing the frame and function size; fixing it would require non-source compiler manipulation.
