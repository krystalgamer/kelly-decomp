# reset__9game_info

- Address: `0x00277D58`
- Size: `0x94` (148 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.5405 | 56.7568 | `candidate.cpp` |
| 2 | different | 16.8919 | 5.4054 | `candidate.cpp` |
| 3 | different | 72.2973 | 67.5676 | `candidate.cpp` |
| 4 | different | 22.2973 | 5.4054 | `candidate.cpp` |
| 5 | different | 65.5405 | 56.7568 | `candidate.cpp` |

## Outcome

Five released macro-expansion variants reproduced the two string copies and defaults, but target-specific saved-register scheduling did not match.
