# update_rot__6widget

- Address: `0x0033E7D0`
- Size: `0xCC` (204 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.0784 | 92.1569 | `candidate.cpp` |
| 2 | different | 98.0392 | 92.1569 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Recovered the released inherited-angle update, rotation matrix construction, and child propagation.
