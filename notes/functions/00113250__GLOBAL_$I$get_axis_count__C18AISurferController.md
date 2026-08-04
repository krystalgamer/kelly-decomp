# _GLOBAL_$I$get_axis_count__C18AISurferController

- Address: `0x00113250`
- Size: `0x20` (32 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath_cell.cpp`
- Reference source: `KS/SRC/ai_polypath_cell.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.125 | 0.0 | `size32-first-probes-1.cpp` |
| 2 | different | 3.125 | 0.0 | `size32-first-probes-2.cpp` |
| 3 | different | 3.125 | 0.0 | `size32-first-probes-3.cpp` |

## Outcome

Three direct source forms collapse the generated initialization thunk to a 12-byte sibling call. The target retains a 32-byte frame, and the manual `extern "C"` wrapper was removed.
