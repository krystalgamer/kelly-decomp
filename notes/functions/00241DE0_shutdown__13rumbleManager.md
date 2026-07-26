# shutdown__13rumbleManager

- Address: `0x00241DE0`
- Size: `0xE4` (228 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.0351 | 7.0175 | `candidate-round1.cpp` |
| 2 | different | 20.1754 | 5.2632 | `candidate-round2.cpp` |
| 3 | different | 92.1053 | 78.9474 | `candidate-round3.cpp` |
| 4 | different | 85.5263 | 64.9123 | `candidate-round4.cpp` |
| 5 | different | 71.9298 | 57.8947 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released rumble shutdown plus target null guards and authentic input/world/game layouts reached exact size and 92.1053%, but high-base register moves and loop branch forms remain compiler-scheduling differences.
