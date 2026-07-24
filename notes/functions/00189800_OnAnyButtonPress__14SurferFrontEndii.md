# OnAnyButtonPress__14SurferFrontEndii

- Address: `0x00189800`
- Size: `0x60` (96 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 12.5 | `candidate.cpp` |
| 2 | different | 22.0 | 8.0 | `candidate.cpp` |
| 3 | different | 79.1667 | 66.6667 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released camera-moving/button/state branches and FEEntityManager layout. Expressing the camera-state XOR directly matched on attempt 4.

## Outcome

Matched surfer frontend button handling
