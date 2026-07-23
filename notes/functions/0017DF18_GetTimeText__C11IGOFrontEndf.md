# GetTimeText__C11IGOFrontEndf

- Address: `0x0017DF18`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.3043 | 60.8696 | `candidate.cpp` |
| 2 | different | 59.7826 | 56.5217 | `candidate.cpp` |
| 3 | different | 59.7826 | 56.5217 | `candidate.cpp` |
| 4 | different | 66.3043 | 60.8696 | `candidate.cpp` |
| 5 | different | 84.7826 | 73.913 | `candidate.cpp` |

## Outcome

Released float-time formatting conversion remained scheduler-sensitive after five source-level and ABI-faithful candidates; the closest source lacked the target integer-to-float latency nop.
