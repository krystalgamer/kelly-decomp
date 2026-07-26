# Update__17TrickBookFrontEndf

- Address: `0x00196630`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.7037 | 72.2222 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 78.7037 | 72.2222 | `candidate.cpp` |
| 4 | different | 77.7778 | 68.5185 | `candidate.cpp` |
| 5 | different | 88.8889 | 87.037 | `candidate.cpp` |

## Outcome

Deferred after five source-level attempts. The best candidate matched through the camera and state update logic, but EE GCC tail-called the final base update instead of emitting the shipped call and epilogue.
