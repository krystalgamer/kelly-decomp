# set_bg_color__12timer_widgetG5color

- Address: `0x002BB790`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.2381 | 4.7619 | `candidate.cpp` |
| 2 | different | 61.9048 | 38.0952 | `candidate.cpp` |
| 3 | different | 57.1429 | 33.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released timer_widget::set_bg_color body, color copy constructor, timer bg offset, full widget virtual ordering through set_color, and widget vptr offset. Reusing that declaration produced the exact aggregate copy and virtual dispatch.

## Outcome

Matched released timer widget background color setter
