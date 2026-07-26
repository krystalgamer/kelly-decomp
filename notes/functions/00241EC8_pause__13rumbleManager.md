# pause__13rumbleManager

- Address: `0x00241EC8`
- Size: `0xE4` (228 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.0351 | 3.5088 | `candidate-round1.cpp` |
| 2 | different | 92.1053 | 78.9474 | `candidate-round2.cpp` |
| 3 | different | 84.6491 | 64.9123 | `candidate-round3.cpp` |
| 4 | different | 71.9298 | 57.8947 | `candidate-round4.cpp` |
| 5 | different | 22.0339 | 5.0847 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released pause logic plus target null guards and verified rumble/input/world layouts reached exact size and 92.1053%, but high-base moves and branch-likely loop scheduling remain irreducible compiler differences.
