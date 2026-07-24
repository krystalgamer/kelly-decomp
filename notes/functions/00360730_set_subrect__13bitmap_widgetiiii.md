# set_subrect__13bitmap_widgetiiii

- Address: `0x00360730`
- Size: `0x80` (128 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.9688 | 6.25 | `candidate.cpp` |
| 2 | different | 17.1875 | 3.125 | `candidate.cpp` |
| 3 | different | 15.625 | 0.0 | `candidate.cpp` |
| 4 | different | 14.0625 | 0.0 | `candidate.cpp` |
| 5 | different | 19.5312 | 12.5 | `candidate.cpp` |

## Outcome

Deferred the released bitmap subrect setter after five source-level attempts; the memberwise rectangle assignment matched, but four target-only integer-to-float hazard nops could not be reproduced.
