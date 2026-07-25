# __tf14surfing_object

- Address: `0x0026FEE0`
- Size: `0xA4` (164 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6829 | 2.439 | `candidate.cpp` |
| 2 | different | 46.3415 | 26.8293 | `candidate.cpp` |
| 3 | different | 14.6341 | 4.878 | `candidate.cpp` |
| 4 | different | 17.6829 | 2.439 | `candidate.cpp` |
| 5 | different | 11.1702 | 0.0 | `candidate.cpp` |

## Outcome

Five source-faithful nested RTTI variants reproduced the surfing object RTTI hierarchy but not original saved-register scheduling.
