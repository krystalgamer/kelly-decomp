# _S_refill__t27__my_default_alloc_template2b0i0Ui

- Address: `0x0010DAE0`
- Size: `0x9C` (156 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/custom_stl.h`
- Reference source: `KS/SRC/custom_stl.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.125 | 37.5 | `candidate.cpp` |
| 2 | different | 78.125 | 70.0 | `candidate.cpp` |
| 3 | different | 58.75 | 45.0 | `candidate.cpp` |
| 4 | different | 78.125 | 70.0 | `candidate.cpp` |
| 5 | different | 78.125 | 70.0 | `candidate.cpp` |

## Outcome

Five released-template and ABI-faithful allocator variants reproduced chunk allocation and free-list linking; the best matched 28 of 39 target instructions, but GCC2 loop delay-slot scheduling retained one extra nop.
