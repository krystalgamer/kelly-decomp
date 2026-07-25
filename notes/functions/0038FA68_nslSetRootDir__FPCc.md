# nslSetRootDir__FPCc

- Address: `0x0038FA68`
- Size: `0x98` (152 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.1579 | 23.6842 | `candidate.cpp` |
| 2 | different | 26.875 | 22.5 | `candidate.cpp` |
| 3 | different | 36.8421 | 26.3158 | `candidate.cpp` |
| 4 | different | 35.5263 | 18.4211 | `candidate.cpp` |
| 5 | different | 41.4474 | 26.3158 | `candidate.cpp` |

## Outcome

Five released-source and address-faithful variants reproduced the root copy and trailing-slash removal, but GCC2 global-address materialization and empty-string scheduling did not match.
