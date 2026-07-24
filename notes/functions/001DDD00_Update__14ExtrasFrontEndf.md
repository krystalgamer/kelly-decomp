# Update__14ExtrasFrontEndf

- Address: `0x001DDD00`
- Size: `0x68` (104 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.h`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.0357 | 25.0 | `candidate.cpp` |
| 2 | different | 96.1538 | 92.3077 | `candidate.cpp` |
| 3 | different | 96.1538 | 92.3077 | `candidate.cpp` |
| 4 | different | 33.0357 | 25.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact active submenu dispatch, FrontEnd base offset, and FEMenu fallback update. Reusing the source-faithful shared layout and scheduling barrier matched on attempt 5.

## Outcome

Matched extras frontend update
