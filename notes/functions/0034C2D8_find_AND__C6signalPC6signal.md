# find_AND__C6signalPC6signal

- Address: `0x0034C2D8`
- Size: `0xA4` (164 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.3659 | 2.439 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 48.7805 | 21.9512 | `candidate.cpp` |
| 4 | different | 91.4634 | 90.2439 | `candidate.cpp` |
| 5 | different | 48.2558 | 30.2326 | `candidate.cpp` |

## Outcome

Five released signal-list variants reproduced AND lookup but not iterator spill scheduling.
