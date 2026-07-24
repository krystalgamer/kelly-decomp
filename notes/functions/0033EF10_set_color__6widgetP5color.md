# set_color__6widgetP5color

- Address: `0x0033EF10`
- Size: `0x68` (104 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.2593 | 22.2222 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the four-color copy loop, widget color offset, and update_col virtual slot. A source-faithful scalar assignment operator matched on attempt 2.

## Outcome

Matched widget color array update
