# __7cg_meshR10chunk_fileb

- Address: `0x002D8CF8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.3191 | 6.383 | `candidate.cpp` |
| 2 | different | 31.9149 | 6.383 | `candidate.cpp` |
| 3 | different | 86.1702 | 61.7021 | `candidate.cpp` |
| 4 | different | 88.2979 | 68.0851 | `candidate.cpp` |
| 5 | different | 20.7447 | 2.1277 | `candidate.cpp` |

### Attempt 5 notes

Five variants recovered the target frame and vector layout, but explicit
register constraints disrupted the constructor schedule.

## Outcome

Five source-level variants recovered the collision mesh base construction, vector layout, frame size, and file read, but the original constructor register schedule did not match.
