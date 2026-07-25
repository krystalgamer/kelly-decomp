# ActionButtonHeld__12TrickManager

- Address: `0x00243708`
- Size: `0xA4` (164 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.439 | 70.7317 | `candidate.cpp` |
| 2 | different | 77.439 | 70.7317 | `candidate.cpp` |
| 3 | different | 16.8478 | 4.3478 | `candidate.cpp` |
| 4 | different | 29.878 | 17.0732 | `candidate.cpp` |
| 5 | different | 28.0488 | 9.7561 | `candidate.cpp` |

## Outcome

Five released action-button queue scans reproduced the logic but not one target-only FPU comparison hazard nop.
