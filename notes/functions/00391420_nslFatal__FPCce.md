# nslFatal__FPCce

- Address: `0x00391420`
- Size: `0x98` (152 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 42.7632 | 23.6842 | `candidate.cpp` |
| 3 | different | 15.1316 | 2.6316 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five released-source variadic reconstructions reproduced formatting, critical callback dispatch, and fallback output, but the original mixed GPR/FPR va_list save prologue could not be reproduced.
