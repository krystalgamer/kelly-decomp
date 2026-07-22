# show__11menu_widget

- Address: `0x0033F448`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.4762 | 57.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Used immutable widget.cpp:1061-1068 with shared widget/menu declarations. Attempt 1 tail-called widget::show; attempt 2 used a normalized return barrier to preserve the retail call and epilogue.
