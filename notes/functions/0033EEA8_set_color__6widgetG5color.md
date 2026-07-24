# set_color__6widgetG5color

- Address: `0x0033EEA8`
- Size: `0x64` (100 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released four-color loop, by-value color ABI, widget color/vtable offsets, and update_col slot. The integration-safe raw aggregate form matched on attempt 2.

## Outcome

Matched widget color assignment
