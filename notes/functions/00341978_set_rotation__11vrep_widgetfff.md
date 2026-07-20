# set_rotation__11vrep_widgetfff

- Address: `0x00341978`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released Euler-angle stores and virtual update_rot dispatch matched exactly with vtable at 0x140, angles at 0x158-0x160, and update_rot at virtual slot 0x11c.

## Outcome

The released vrep-widget rotation setter matched exactly on the first attempt.
