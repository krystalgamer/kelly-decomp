# show__11vrep_widget

- Address: `0x00341788`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override calls the shared `widget::show` and then dispatches the
shared virtual `update_rot`.

## Outcome

The manual vrep-widget vtable and object layouts were removed.
