# scale_to__6widgetff

- Address: `0x0033ED18`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method stores horizontal/vertical scale at 0x118/0x11c and virtually calls `update_scale` through slot 0x110.

## Outcome

The released immediate widget scale implementation matched exactly on the first attempt.
