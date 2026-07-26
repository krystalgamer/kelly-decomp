# Reset__11auto_camera

- Address: `0x0022C808`
- Size: `0xC4` (196 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 98.9796 | 95.9184 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Recovered beach-camera globals, data stride, object fields, and the inherited frame-advance vtable slot for an exact reset.
