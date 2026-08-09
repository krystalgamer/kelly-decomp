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

The released Euler-angle stores and virtual `update_rot` dispatch use the shared
vrep-widget declaration.

## Outcome

The manual object/vtable layout was removed; the released setter remains exact.
