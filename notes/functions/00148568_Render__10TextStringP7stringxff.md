# Render__10TextStringP7stringxff

- Address: `0x00148568`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.1667 | 15.0 | `candidate.cpp` |
| 2 | different | 37.0833 | 15.0 | `candidate.cpp` |
| 3 | different | 37.0833 | 15.0 | `candidate.cpp` |
| 4 | different | 37.0833 | 15.0 | `candidate.cpp` |
| 5 | different | 37.0833 | 15.0 | `candidate.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The exact text render control flow, alpha rules, object offsets, and call target are recovered, but isolated EE GCC lowers the released alpha conversion and FPU hazards differently.
