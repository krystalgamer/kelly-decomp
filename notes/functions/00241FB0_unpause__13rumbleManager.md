# unpause__13rumbleManager

- Address: `0x00241FB0`
- Size: `0xE4` (228 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.9123 | 7.0175 | `candidate-round1.cpp` |
| 2 | different | 86.8421 | 71.9298 | `candidate-round2.cpp` |
| 3 | different | 88.5965 | 75.4386 | `candidate-round3.cpp` |
| 4 | different | 74.1228 | 59.6491 | `candidate-round4.cpp` |
| 5 | different | 73.2456 | 59.6491 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released unpause logic plus target null guards and authentic rumble/input/world layouts reached exact size, but high-base register moves and non-likely loop branch scheduling remain compiler-only differences.
