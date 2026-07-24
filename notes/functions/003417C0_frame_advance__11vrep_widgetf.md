# frame_advance__11vrep_widgetf

- Address: `0x003417C0`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.3529 | 79.4118 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released vrep-widget frame advance matched after blocking the final base frame-advance tail call.

## Outcome

The released vrep-widget frame advance matched exactly on the second attempt.
