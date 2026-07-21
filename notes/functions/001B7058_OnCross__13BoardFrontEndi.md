# OnCross__13BoardFrontEndi

- Address: `0x001B7058`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.5882 | 52.9412 | `candidate.cpp` |
| 2 | different | 98.5294 | 94.1176 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body with an abbreviated frontend layout; the manager field preceded the GCC2 vptr and landed four bytes early.

### Attempt 2 notes

Restored the released base/derived layout; only the abbreviated CamIsMoving boolean meaning inverted the branch.

### Attempt 3 notes

Restored the released camera-moving predicate representation; the body matched exactly.

## Outcome

The exact released camera-moving guard and Select virtual dispatch match with the released layouts.
