# Draw__16MCDetectFrontEnd

- Address: `0x001A4268`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.8889 | 29.6296 | `candidate.cpp` |
| 2 | different | 96.0 | 84.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read drawMenu behavior, error/background fields, virtual Draw slots, and FEGraphicalMenu base draw. Fixed function registers matched on attempt 3.

## Outcome

Matched memory card frontend drawing
