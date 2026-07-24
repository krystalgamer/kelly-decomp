# set_subrect__6widgetiiii

- Address: `0x003603C8`
- Size: `0x70` (112 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.2857 | 3.5714 | `candidate.cpp` |
| 2 | different | 6.25 | 3.5714 | `candidate.cpp` |
| 3 | different | 19.6429 | 7.1429 | `candidate.cpp` |
| 4 | different | 21.4286 | 3.5714 | `candidate.cpp` |
| 5 | different | 16.9643 | 3.5714 | `candidate.cpp` |

## Outcome

Deferred widget subrectangle assignment after five source-level attempts; the exact rectf/vector2d source was reproduced, but target-only integer-to-float hazard nops and temporary-copy scheduling did not.
