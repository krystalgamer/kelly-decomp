# select__16menu_item_widgetb

- Address: `0x0033F318`
- Size: `0x58` (88 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released menu_item_widget::select body and selected/parent/type/selected-item/vptr offsets plus deselect virtual slot. It matched byte-exactly.

## Outcome

Matched released menu item selection
