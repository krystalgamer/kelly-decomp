# OnAnyButtonPress__13BoardFrontEndii

- Address: `0x001B7408`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.1053 | 85.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 95.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and shared front-end offsets matched all calls and branches except the reconstructed camera stopped field was initially modeled as int, allowing boolean simplification.

### Attempt 2 notes

Restoring the released bool type for cam_stopped retained its word-aligned storage and produced the target xori normalization and exact function.

## Outcome

Matched the released board button handling using shared original-style front-end manager and camera state declarations.
