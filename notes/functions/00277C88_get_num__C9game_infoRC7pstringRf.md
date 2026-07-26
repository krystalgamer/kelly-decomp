# get_num__C9game_infoRC7pstringRf

- Address: `0x00277C88`
- Size: `0xCC` (204 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.3462 | 25.0 | `candidate.cpp` |
| 2 | different | 41.6667 | 19.6078 | `candidate.cpp` |
| 3 | different | 44.1176 | 21.5686 | `candidate.cpp` |
| 4 | different | 25.9615 | 1.9231 | `candidate.cpp` |
| 5 | different | 25.9615 | 1.9231 | `candidate.cpp` |

## Outcome

The released numeric getter was recovered, but local-static pstring initialization and comparison control flow remained irreducible after five source-level attempts.
