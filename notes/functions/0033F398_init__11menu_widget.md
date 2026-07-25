# init__11menu_widget

- Address: `0x0033F398`
- Size: `0xAC` (172 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 30.814 | 16.2791 | `candidate.cpp` |
| 3 | different | 23.0 | 12.0 | `candidate.cpp` |
| 4 | different | 27.2222 | 15.5556 | `candidate.cpp` |
| 5 | different | 30.814 | 11.6279 | `candidate.cpp` |

## Outcome

Five released menu initialization variants could not reproduce the original GCC2 list-iterator spill and scheduling pattern.
