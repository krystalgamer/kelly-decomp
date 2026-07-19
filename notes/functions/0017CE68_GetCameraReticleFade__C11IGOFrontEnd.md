# GetCameraReticleFade__C11IGOFrontEnd

- Address: `0x0017CE68`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal layouts preserve `cameraWidget` at 0x5a8 and its inlined fade value at 0x78.

## Outcome

The released `IGOFrontEnd::GetCameraReticleFade` accessor matched exactly.
