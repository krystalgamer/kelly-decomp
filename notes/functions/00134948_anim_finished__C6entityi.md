# anim_finished__C6entityi

- Address: `0x00134948`
- Size: `0x9C` (156 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.9231 | 28.2051 | `candidate.cpp` |
| 2 | different | 65.3846 | 48.7179 | `candidate.cpp` |
| 3 | different | 51.9231 | 28.2051 | `candidate.cpp` |
| 4 | different | 51.9231 | 28.2051 | `candidate.cpp` |
| 5 | different | 62.1795 | 46.1538 | `candidate.cpp` |

## Outcome

Five released-source animation-control variants reproduced all completion conditions, but GCC2 flag reload allocation and the target FPU hazard nop could not both be reproduced.
