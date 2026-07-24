# render__8polytubeP6camerafUif

- Address: `0x0013AE48`
- Size: `0x74` (116 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.cpp`
- Reference source: `KS/SRC/polytube.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.3793 | 0.0 | `candidate.cpp` |
| 2 | different | 50.8621 | 34.4828 | `candidate.cpp` |
| 3 | different | 90.5172 | 89.6552 | `candidate.cpp` |
| 4 | different | 89.6552 | 86.2069 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the released material flag updates, spline/control selection, complete polytube layout, matrix pointer, and render_polytube ABI. Correcting the matrix indirection and scheduling it at the call matched on attempt 5.

## Outcome

Matched polytube rendering
