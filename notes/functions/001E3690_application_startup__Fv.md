# application_startup__Fv

- Address: `0x001E3690`
- Size: `0x98` (152 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.7895 | 50.0 | `candidate.cpp` |
| 2 | different | 74.3421 | 65.7895 | `candidate.cpp` |
| 3 | different | 75.0 | 68.4211 | `candidate.cpp` |
| 4 | different | 77.6316 | 73.6842 | `candidate.cpp` |
| 5 | different | 73.0263 | 68.4211 | `candidate.cpp` |

## Outcome

Five released-source startup reconstructions reproduced all allocations, singleton initialization, CP0 clock read, and app construction, but global-store/register scheduling did not match.
