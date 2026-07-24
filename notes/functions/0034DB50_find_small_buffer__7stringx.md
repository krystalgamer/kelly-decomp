# find_small_buffer__7stringx

- Address: `0x0034DB50`
- Size: `0x68` (104 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.2692 | 3.8462 | `candidate.cpp` |
| 2 | different | 15.5172 | 3.4483 | `candidate.cpp` |
| 3 | different | 28.7037 | 14.8148 | `candidate.cpp` |
| 4 | different | 18.2692 | 3.8462 | `candidate.cpp` |
| 5 | different | 21.1538 | 7.6923 | `candidate.cpp` |

## Outcome

Deferred small string buffer lookup after five source-faithful candidates; whole-translation-unit static member register allocation did not reproduce standalone
