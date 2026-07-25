# get_dist__C12light_sourceRC8vector3d

- Address: `0x002CDD98`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.7895 | 26.3158 | `candidate.cpp` |
| 2 | different | 24.359 | 2.5641 | `candidate.cpp` |
| 3 | different | 42.1053 | 21.0526 | `candidate.cpp` |
| 4 | different | 40.7895 | 26.3158 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five released-source light distance variants reproduced the flavor gate and vector length, but target-specific register allocation and floating-point hazard scheduling did not match.
