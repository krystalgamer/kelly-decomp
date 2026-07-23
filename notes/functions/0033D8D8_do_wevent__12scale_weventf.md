# do_wevent__12scale_weventf

- Address: `0x0033D8D8`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.8095 | 95.2381 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released scale_wevent body, wevent/owner/sx/sy layout, widget scale fields, vptr offset, and scale_to virtual slot. Correcting the shared layout padding on attempt 2 matched byte-exactly.

## Outcome

Matched released scale_wevent interpolation
