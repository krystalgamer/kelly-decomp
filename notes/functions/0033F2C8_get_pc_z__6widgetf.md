# get_pc_z__6widgetf

- Address: `0x0033F2C8`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released widget::get_pc_z body, rhw layer declarations, projection constant, and static range table. Reused the released arithmetic and clamping order byte-exactly.

## Outcome

Matched released widget::get_pc_z body
