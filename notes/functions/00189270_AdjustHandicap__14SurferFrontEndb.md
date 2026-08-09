# AdjustHandicap__14SurferFrontEndb

- Address: `0x00189270`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.9286 | 0.0 | `candidate.cpp` |
| 2 | different | 94.6429 | 85.7143 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released left/right handicap dispatch uses the shared surfer frontend
layout. Branch-local function pointers preserve the non-tail calls and
duplicated epilogue schedule.

## Outcome

The local layout and compiler barriers were removed.
