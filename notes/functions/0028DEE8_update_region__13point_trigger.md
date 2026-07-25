# update_region__13point_trigger

- Address: `0x0028DEE8`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.3158 | 39.4737 | `candidate.cpp` |
| 2 | different | 36.1111 | 22.2222 | `candidate.cpp` |
| 3 | different | 19.0789 | 2.6316 | `candidate.cpp` |
| 4 | different | 46.0526 | 34.2105 | `candidate.cpp` |
| 5 | different | 28.4722 | 13.8889 | `candidate.cpp` |

## Outcome

Five source-faithful region updates could not reproduce the target floating-point hazard nop while retaining the non-tail region update epilogue.
