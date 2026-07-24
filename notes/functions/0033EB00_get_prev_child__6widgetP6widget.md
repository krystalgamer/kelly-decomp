# get_prev_child__6widgetP6widget

- Address: `0x0033EB00`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.8276 | 0.0 | `candidate.cpp` |
| 2 | different | 24.1379 | 3.4483 | `candidate.cpp` |
| 3 | different | 9.127 | 0.0 | `candidate.cpp` |
| 4 | different | 19.8276 | 6.8966 | `candidate.cpp` |
| 5 | different | 12.069 | 0.0 | `candidate.cpp` |

## Outcome

Deferred widget previous-child lookup after five source-level attempts; the released wrapped traversal and back-child fallback reproduced, but the target STL iterator stack layout did not.
