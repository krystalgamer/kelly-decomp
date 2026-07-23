# resize__13bitmap_widgetff

- Address: `0x0033FBE0`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released bitmap_widget::resize body, open flag/bit, widget vptr, width/height offsets, and scale_to virtual slot. It matched byte-exactly.

## Outcome

Matched released bitmap widget resize
