# set_tc__13bitmap_widget

- Address: `0x0033FD10`
- Size: `0x11C` (284 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.7195 | 4.878 | `candidate.cpp` |

### Attempt 1 notes

# First-pass source test: 0x0033FD10

Tested the exact released `bitmap_widget::set_tc()` body from `KS/SRC/widget.cpp:1372-1380` with only the declarations needed to reproduce the released layouts and inline accessors (`widget.h:481-527`, `txtcoord.h:27-38`, and `rect.h`).

The single non-placeholder candidate compiled and differed: 13.7195% byte score, 4.878% instruction score, 328 emitted bytes versus 284 target bytes. No variants were attempted.

## Outcome

The exact released bitmap texture-coordinate setter differed from the target; the sole attempt scored 13.7195%.
