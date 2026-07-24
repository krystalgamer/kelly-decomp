# set_subrect__7elementiiii

- Address: `0x002FFF78`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.h`
- Reference source: `KS/SRC/element.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.4286 | 3.5714 | `candidate.cpp` |
| 2 | different | 20.5357 | 0.0 | `candidate.cpp` |
| 3 | different | 30.3571 | 10.7143 | `candidate.cpp` |
| 4 | different | 25.0 | 3.5714 | `candidate.cpp` |
| 5 | different | 19.6429 | 3.5714 | `candidate.cpp` |

## Outcome

Deferred element subrectangle assignment after five source-level attempts; the exact rectf/vector2d source was reproduced, but target-only integer-to-float hazard nops and temporary-copy scheduling did not.
