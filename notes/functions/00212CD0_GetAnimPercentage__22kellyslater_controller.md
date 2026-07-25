# GetAnimPercentage__22kellyslater_controller

- Address: `0x00212CD0`
- Size: `0x98` (152 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 42.7632 | 31.5789 | `candidate.cpp` |
| 3 | different | 42.7632 | 31.5789 | `candidate.cpp` |
| 4 | different | 46.7105 | 31.5789 | `candidate.cpp` |
| 5 | different | 71.7105 | 55.2632 | `candidate.cpp` |

## Outcome

Five released-source animation percentage variants reproduced all calculations and min selection, but target-only floating-point hazard nops did not match.
