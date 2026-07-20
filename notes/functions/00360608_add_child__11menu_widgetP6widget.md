# add_child__11menu_widgetP6widget

- Address: `0x00360608`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base `widget::add_child` call followed by incrementing `num_items` matched exactly with the base layout size of 0x144.

## Outcome

The released menu-widget child insertion override matched exactly on the first attempt.
