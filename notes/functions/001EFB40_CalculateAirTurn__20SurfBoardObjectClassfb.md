# CalculateAirTurn__20SurfBoardObjectClassfb

- Address: `0x001EFB40`
- Size: `0xCC` (204 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.2549 | 1.9608 | `candidate.cpp` |
| 2 | different | 42.6471 | 33.3333 | `candidate.cpp` |
| 3 | different | 27.2321 | 19.6429 | `candidate.cpp` |
| 4 | different | 42.6471 | 33.3333 | `candidate.cpp` |
| 5 | different | 42.6471 | 33.3333 | `candidate.cpp` |

## Outcome

The released air-turn behavior was recovered, but floating-point hazard padding and shared epilogue scheduling remained irreducible after five source-level attempts.
