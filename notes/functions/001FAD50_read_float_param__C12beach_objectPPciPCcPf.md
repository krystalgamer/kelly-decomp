# read_float_param__C12beach_objectPPciPCcPf

- Address: `0x001FAD50`
- Size: `0xA4` (164 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.3415 | 65.8537 | `candidate.cpp` |
| 2 | different | 22.7778 | 4.4444 | `candidate.cpp` |
| 3 | different | 71.3415 | 65.8537 | `candidate.cpp` |
| 4 | different | 24.3902 | 2.439 | `candidate.cpp` |
| 5 | different | 30.4878 | 17.0732 | `candidate.cpp` |

## Outcome

Five released float parameter-reader variants reproduced parsing but not GCC2 loop-bound prologue scheduling.
