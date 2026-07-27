# clear_lines__17text_block_widget

- Address: `0x00340DC0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 19.1667 | 0.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 22.1311 | 0.0 | `candidate.cpp` |
| 5 | different | 22.1311 | 0.0 | `candidate.cpp` |

## Outcome

Released logic confirmed; five bounded C++ attempts did not reproduce the target STL loop codegen.
