# set_origin__6widgetss

- Address: `0x00360438`
- Size: `0xC` (12 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `origin_x` at `0x38` then `origin_y` at `0x3A`; EE GCC schedules the first store into the delay slot.

## Outcome

The released `widget::set_origin` halfword stores matched exactly on the first attempt.
