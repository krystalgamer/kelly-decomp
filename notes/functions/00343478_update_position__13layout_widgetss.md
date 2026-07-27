# update_position__13layout_widgetss

- Address: `0x00343478`
- Size: `0x100` (256 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.0938 | 79.6875 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 tested the exact released `layout_widget::update_position(short, short)` definition from `kelly-slaters-pro-surfer/KS/SRC/widget.cpp:2931-2942` with the released widget, text-widget, and layout-widget declarations represented self-contained from `widget.h`. No body rewrite, tuning, or diff chasing was performed. Result: different, 71.0938% byte score and 79.6875% instruction score.

## Outcome

The exact released layout-widget position updater differed from the target; the sole completed attempt scored 71.0938%.
