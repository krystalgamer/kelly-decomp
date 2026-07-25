# clear_callbacks__6signal

- Address: `0x0034C750`
- Size: `0x90` (144 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 0.0 | `candidate.cpp` |
| 2 | different | 46.7949 | 28.2051 | `candidate.cpp` |
| 3 | different | 49.359 | 35.8974 | `candidate.cpp` |
| 4 | different | 48.0769 | 35.8974 | `candidate.cpp` |
| 5 | different | 48.0769 | 33.3333 | `candidate.cpp` |

## Outcome

Five source-level callback-list teardowns could not reproduce the generated iterator temporary layout and resize-call register scheduling.
