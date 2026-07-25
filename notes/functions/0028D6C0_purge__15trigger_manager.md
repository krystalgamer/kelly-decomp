# purge__15trigger_manager

- Address: `0x0028D6C0`
- Size: `0x9C` (156 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.4872 | 26.3158 | `candidate.cpp` |
| 2 | different | 31.25 | 27.5 | `candidate.cpp` |
| 3 | different | 32.6923 | 24.3243 | `candidate.cpp` |
| 4 | different | 32.6923 | 15.3846 | `candidate.cpp` |
| 5 | different | 28.2051 | 16.2162 | `candidate.cpp` |

## Outcome

Five released-source and vector-layout variants reproduced trigger deletion and region-vector clearing, but GCC2 STL resize lowering and scheduling did not match.
