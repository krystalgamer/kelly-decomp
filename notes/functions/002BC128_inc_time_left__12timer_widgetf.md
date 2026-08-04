# inc_time_left__12timer_widgetf

- Address: `0x002BC128`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-beam-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-beam-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-beam-probes-3.cpp` |

## Outcome

All three shared-declaration forms compute the new time and tail-call `timer_widget::set_time_left` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
