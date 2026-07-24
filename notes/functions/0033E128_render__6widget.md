# render__6widget

- Address: `0x0033E128`
- Size: `0x7C` (124 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 47.5806 | 22.5806 | `candidate.cpp` |
| 3 | different | 21.0526 | 0.0 | `candidate.cpp` |
| 4 | different | 56.8182 | 36.3636 | `candidate.cpp` |
| 5 | different | 22.093 | 6.9767 | `candidate.cpp` |

## Outcome

Deferred the released base-widget renderer after five source-level attempts; the exact child traversal and virtual call were reconstructed, but the STL iterator temporary stack layout could not be reproduced.
