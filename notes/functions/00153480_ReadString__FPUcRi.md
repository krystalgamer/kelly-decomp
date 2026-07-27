# ReadString__FPUcRi

- Address: `0x00153480`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.4615 | 6.1538 | `candidate-1-exact-released.cpp` |
| 2 | different | 93.75 | 80.0 | `candidate-2-external-index-terminator.cpp` |
| 3 | different | 30.8333 | 13.3333 | `candidate-3-pointer-cursor-loop.cpp` |
| 4 | different | 33.75 | 18.3333 | `candidate-4-countdown-cursor-loop.cpp` |
| 5 | different | 23.0769 | 6.1538 | `candidate-5-guarded-do-loop.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The exact binary string reader, ownership, and return-object lifetimes are recovered, but isolated EE GCC retains different loop-variable and local-allocation scheduling.
