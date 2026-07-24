# is_competition_level__4game

- Address: `0x0027AAA8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.087 | 43.4783 | `candidate.cpp` |
| 2 | different | 39.1304 | 0.0 | `candidate.cpp` |
| 3 | different | 39.1304 | 0.0 | `candidate.cpp` |
| 4 | different | 52.1739 | 47.8261 | `candidate.cpp` |
| 5 | different | 39.1304 | 0.0 | `candidate.cpp` |

## Outcome

Released competition-level predicate retained a four-byte/branch-layout mismatch after five source-level boolean/control-flow and fixed-register candidates; the closest matched the entire goal-range prefix.
