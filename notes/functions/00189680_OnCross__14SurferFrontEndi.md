# OnCross__14SurferFrontEndi

- Address: `0x00189680`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 32.5 | 10.0 | `candidate.cpp` |
| 3 | different | 37.5 | 16.6667 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the released recent-controller update, active menu, entity-manager offsets, camera transition, TB/bio flag, and base/virtual Cross calls. Correcting CamIsMoving as the released inverted state field matched on attempt 4.

## Outcome

Matched surfer frontend cross handling
