# read_data__7ai_goalR10chunk_file

- Address: `0x001069F8`
- Size: `0xF0` (240 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.8333 | 31.6667 | `candidate-1-exact-released.cpp` |
| 2 | different | 27.5 | 16.6667 | `candidate-2-pointer-string-equality.cpp` |
| 3 | different | 40.8333 | 31.6667 | `candidate-3-explicit-while-loop.cpp` |
| 4 | different | 28.75 | 16.6667 | `candidate-4-explicit-break-loop.cpp` |
| 5 | different | 41.25 | 30.0 | `candidate-5-labeled-condition-loop.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact reader semantics and ABI are recovered, but isolated EE GCC rotates the outer loop and lowers string equality differently from the full translation unit.
