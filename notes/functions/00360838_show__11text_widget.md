# show__11text_widget

- Address: `0x00360838`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-gameplay-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-gameplay-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-gameplay-probes-3.cpp` |

## Outcome

All three direct forms tail-call `widget::show` in eight bytes. The target retains a 28-byte frame, so the wrapper was deferred.
