# __7stringxQ27stringx4fmtdPCce

- Address: `0x0034D640`
- Size: `0x9C` (156 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.8974 | 20.5128 | `candidate.cpp` |
| 2 | different | 35.8974 | 20.5128 | `candidate.cpp` |
| 3 | different | 22.7273 | 4.5455 | `candidate.cpp` |
| 4 | different | 17.9487 | 5.1282 | `candidate.cpp` |
| 5 | different | 41.875 | 27.5 | `candidate.cpp` |

## Outcome

Five released-source MIPS varargs variants reproduced formatted construction semantics, but the original mixed GPR/FPR va_list save prologue could not be reproduced.
