# find_item_by_desc__C11menu_widgetR7stringx

- Address: `0x0033F7B0`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.3243 | 0.0 | `candidate.cpp` |
| 2 | different | 24.3243 | 0.0 | `candidate.cpp` |
| 3 | different | 27.6316 | 10.5263 | `candidate.cpp` |
| 4 | different | 22.2973 | 0.0 | `candidate.cpp` |
| 5 | different | 23.6486 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source string/list traversal variants reproduced the comparison semantics, but target-specific whole-function register allocation and loop scheduling did not match.
