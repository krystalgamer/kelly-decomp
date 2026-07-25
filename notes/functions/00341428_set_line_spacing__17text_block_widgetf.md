# set_line_spacing__17text_block_widgetf

- Address: `0x00341428`
- Size: `0xA8` (168 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.5238 | 7.1429 | `candidate.cpp` |
| 2 | different | 33.9286 | 14.2857 | `candidate.cpp` |
| 3 | different | 34.3023 | 4.6512 | `candidate.cpp` |
| 4 | different | 22.093 | 0.0 | `candidate.cpp` |
| 5 | different | 30.3571 | 4.7619 | `candidate.cpp` |

## Outcome

Five released line-spacing variants reproduced traversal but not target-only FPU conversion padding and prologue scheduling.
