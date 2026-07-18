# get_sel_item__C11menu_widget

- Address: `0x00360638`
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

The released accessor returns `sel_item` from offset `0x148`.

## Outcome

The released `menu_widget::get_sel_item` accessor matched exactly on the first attempt.
