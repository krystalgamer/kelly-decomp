# set_string__11text_widgetRC7stringx

- Address: `0x00340650`
- Size: `0x98` (152 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.7895 | 84.2105 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 90.7895 | 84.2105 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 89.4737 | 78.9474 | `candidate.cpp` |

## Outcome

Five released-source and declaration-faithful variants reproduced the complete operation at exact size, but GCC2 saved-register and first assignment argument scheduling remained different.
