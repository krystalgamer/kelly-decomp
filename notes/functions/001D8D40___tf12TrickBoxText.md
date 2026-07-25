# __tf12TrickBoxText

- Address: `0x001D8D40`
- Size: `0xA4` (164 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6829 | 2.439 | `candidate.cpp` |
| 2 | different | 17.0732 | 2.439 | `candidate.cpp` |
| 3 | different | 16.6667 | 0.0 | `candidate.cpp` |
| 4 | different | 21.7391 | 10.8696 | `candidate.cpp` |
| 5 | different | 46.3415 | 26.8293 | `candidate.cpp` |

## Outcome

Five source-faithful nested RTTI variants reproduced the hierarchy but not original saved-register scheduling.
