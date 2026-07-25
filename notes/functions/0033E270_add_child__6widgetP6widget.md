# add_child__6widgetP6widget

- Address: `0x0033E270`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.1892 | 18.9189 | `candidate.cpp` |
| 2 | different | 54.0541 | 24.3243 | `candidate.cpp` |
| 3 | different | 54.0541 | 24.3243 | `candidate.cpp` |
| 4 | different | 54.0541 | 24.3243 | `candidate.cpp` |
| 5 | different | 64.1892 | 18.9189 | `candidate.cpp` |

## Outcome

Five source-level widget child-list insertion variants reproduced allocation and node links, but GCC2 STL temporary and saved-register scheduling did not match.
