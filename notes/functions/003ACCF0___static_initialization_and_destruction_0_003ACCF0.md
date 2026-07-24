# __static_initialization_and_destruction_0

- Address: `0x003ACCF0`
- Size: `0x70` (112 bytes)
- Object: `ngl/ngl_ate`
- Debug source: `C:/NGL/ps2/ngl_ate.cpp`
- Reference source: `NGL/PS2/ngl_ate.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.0938 | 13.3333 | `candidate.cpp` |
| 2 | different | 76.7857 | 25.0 | `candidate.cpp` |
| 3 | different | 88.3929 | 38.4615 | `candidate.cpp` |
| 4 | different | 80.3571 | 38.4615 | `candidate.cpp` |
| 5 | different | 88.3929 | 38.4615 | `candidate.cpp` |

## Outcome

Deferred the NGL ATE static initializer after five source-level attempts; the released bad-item zeroing and string setup reproduced, but target address-materialization and loop-delay scheduling did not.
