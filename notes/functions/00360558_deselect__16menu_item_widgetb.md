# deselect__16menu_item_widgetb

- Address: `0x00360558`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears the word-sized `selected` flag at offset `0x150`.

## Outcome

The released `menu_item_widget::deselect` flag clear matched exactly on the first attempt.
