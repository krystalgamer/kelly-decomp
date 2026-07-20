# rotate_to__6widgetf

- Address: `0x0033EDE8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal widget layout preserves `angle` at 0x3c and the old-GCC virtual `update_rot` slot reached through the table at 0x140.

## Outcome

The released one-argument `widget::rotate_to` implementation matched exactly on the first attempt.
