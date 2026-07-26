# LoadingProgressUpdate__4game

- Address: `0x002851D0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.0893 | 8.9286 | `candidate.cpp` |
| 2 | different | 66.0714 | 42.8571 | `candidate.cpp` |
| 3 | different | 66.0714 | 42.8571 | `candidate.cpp` |
| 4 | different | 66.0714 | 42.8571 | `candidate.cpp` |
| 5 | different | 22.7679 | 5.3571 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released loading-progress calculation and verified game offsets remain eight bytes short because the target contains conversion-hazard scheduling nops that the legacy compiler does not emit from the available source expressions.
