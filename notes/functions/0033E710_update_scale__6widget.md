# update_scale__6widget

- Address: `0x0033E710`
- Size: `0xBC` (188 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released parent scale propagation, component multiplication, and
child recursion matched on the first attempt with the shared widget
declaration.

## Outcome

Matched the released widget scale propagation and recursive child update.
