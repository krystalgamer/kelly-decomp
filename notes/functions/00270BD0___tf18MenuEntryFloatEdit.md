# __tf18MenuEntryFloatEdit

- Address: `0x00270BD0`
- Size: `0xA4` (164 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
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

Five source-faithful nested RTTI variants reproduced the MenuEntryFloatEdit RTTI hierarchy but not original saved-register scheduling.
