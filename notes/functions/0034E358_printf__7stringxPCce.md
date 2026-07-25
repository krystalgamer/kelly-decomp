# printf__7stringxPCce

- Address: `0x0034E358`
- Size: `0x98` (152 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 15.1316 | 2.6316 | `candidate.cpp` |
| 3 | different | 39.4737 | 18.4211 | `candidate.cpp` |
| 4 | different | 39.4737 | 18.4211 | `candidate.cpp` |
| 5 | different | 23.125 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source varargs reconstructions covered the SDK char-pointer and structured MIPS EABI va_list forms, but the original mixed GPR/FPR save-area prologue could not be reproduced.
