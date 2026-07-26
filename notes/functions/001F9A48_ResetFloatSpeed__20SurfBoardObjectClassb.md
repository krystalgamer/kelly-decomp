# ResetFloatSpeed__20SurfBoardObjectClassb

- Address: `0x001F9A48`
- Size: `0xCC` (204 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 68.6275 | `candidate.cpp` |
| 2 | different | 75.0 | 68.6275 | `candidate.cpp` |
| 3 | different | 75.0 | 68.6275 | `candidate.cpp` |
| 4 | different | 75.0 | 68.6275 | `candidate.cpp` |
| 5 | different | 75.0 | 68.6275 | `candidate.cpp` |

## Outcome

The released float-speed calculation reached 75%, but two floating-point hazard nops remained irreducible after five source-level attempts.
