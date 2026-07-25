# set_material__8polytubeP7mat_fac

- Address: `0x0013ADB0`
- Size: `0x98` (152 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/polytube.cpp`
- Reference source: `KS/SRC/polytube.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.2105 | 18.4211 | `candidate.cpp` |
| 2 | different | 97.3684 | 97.3684 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact allocation/copy/assignment/delete paths. Restoring mat_fac alignment, debug operator-new ABI, and negative-low source filename address matched on attempt 3.

## Outcome

Matched polytube material assignment
