# push__13IGOPrintQueueG7stringx9EventType

- Address: `0x0016ED50`
- Size: `0xE4` (228 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/IGOFrontEnd.cpp`
- Reference source: `KS/SRC/ks/IGOFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.614 | 28.0702 | `candidate-1-exact-released.cpp` |
| 2 | different | 45.614 | 28.0702 | `candidate-2-explicit-inline-message-dtor.cpp` |
| 3 | different | 27.0833 | 11.6667 | `candidate-3-scalarized-temporary.cpp` |
| 4 | different | 46.4912 | 28.0702 | `candidate-4-explicit-raii-lowering.cpp` |
| 5 | different | 46.4912 | 28.0702 | `candidate-5-early-success-result.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released IGO print-queue push behavior, layout, string operations, wrap logic, and cleanup order are recovered, but the target full-TU register allocation uses an extra saved register and a larger frame that natural source forms did not reproduce.
