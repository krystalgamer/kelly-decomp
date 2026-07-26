# set_num__9game_infoRC7pstringf

- Address: `0x00277BB8`
- Size: `0xCC` (204 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.2549 | 19.6078 | `candidate.cpp` |
| 2 | different | 38.2353 | 19.6078 | `candidate.cpp` |
| 3 | different | 46.0784 | 25.4902 | `candidate.cpp` |
| 4 | different | 22.549 | 1.9608 | `candidate.cpp` |
| 5 | different | 22.549 | 1.9608 | `candidate.cpp` |

## Outcome

The released numeric setter was recovered, but local-static pstring initialization and comparison control flow remained irreducible after five source-level attempts.
