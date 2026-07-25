# __tf6portal

- Address: `0x002FFB30`
- Size: `0xA4` (164 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/portal.h`
- Reference source: `KS/SRC/portal.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.4634 | 2.439 | `candidate.cpp` |
| 2 | different | 46.3415 | 26.8293 | `candidate.cpp` |
| 3 | different | 14.6341 | 4.878 | `candidate.cpp` |
| 4 | different | 16.4634 | 2.439 | `candidate.cpp` |
| 5 | different | 10.6383 | 0.0 | `candidate.cpp` |

## Outcome

Five source-faithful nested RTTI variants reproduced the portal hierarchy but not original saved-register scheduling.
