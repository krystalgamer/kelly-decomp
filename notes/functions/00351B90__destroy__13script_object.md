# _destroy__13script_object

- Address: `0x00351B90`
- Size: `0xA4` (164 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.5366 | 4.878 | `candidate.cpp` |
| 2 | different | 55.2326 | 32.5581 | `candidate.cpp` |
| 3 | different | 57.1429 | 30.9524 | `candidate.cpp` |
| 4 | different | 54.2683 | 14.6341 | `candidate.cpp` |
| 5 | different | 33.8889 | 4.4444 | `candidate.cpp` |

## Outcome

Five released iterator variants reproduced instance and executable destruction but not generated iterator scheduling.
