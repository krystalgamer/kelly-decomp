# set_skip__16menu_item_widgetb

- Address: `0x00360560`
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

The released setter writes the word-sized `skip` flag at offset `0x154`.

## Outcome

The released `menu_item_widget::set_skip` setter matched exactly on the first attempt.
