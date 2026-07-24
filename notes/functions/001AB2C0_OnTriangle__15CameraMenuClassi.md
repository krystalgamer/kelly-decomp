# OnTriangle__15CameraMenuClassi

- Address: `0x001AB2C0`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.3929 | 57.1429 | `candidate.cpp` |
| 2 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 3 | different | 89.2857 | 89.2857 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the sound unpause/back-event/pause sequence, navigation event destination, controller preservation, and FEMenu triangle call. Fixed zero/entity argument ordering matched on attempt 4.

## Outcome

Matched camera menu triangle navigation
