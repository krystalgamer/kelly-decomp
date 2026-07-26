# SetFillage__12SpecialMeterf

- Address: `0x00251028`
- Size: `0xC4` (196 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/specialmeter.cpp`
- Reference source: `KS/SRC/ks/specialmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.3673 | 26.5306 | `candidate.cpp` |
| 2 | different | 25.0 | 4.0816 | `candidate.cpp` |
| 3 | different | 43.3673 | 26.5306 | `candidate.cpp` |
| 4 | different | 42.8571 | 24.4898 | `candidate.cpp` |
| 5 | different | 43.3673 | 24.4898 | `candidate.cpp` |

## Outcome

Five attempts reproduced the special-meter behavior, but old FP branch shaping and hazard scheduling remained different.
