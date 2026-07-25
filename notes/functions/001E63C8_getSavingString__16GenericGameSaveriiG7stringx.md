# getSavingString__16GenericGameSaveriiG7stringx

- Address: `0x001E63C8`
- Size: `0x9C` (156 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.7436 | 58.9744 | `candidate.cpp` |
| 2 | different | 19.8718 | 7.6923 | `candidate.cpp` |
| 3 | different | 64.7436 | 58.9744 | `candidate.cpp` |
| 4 | different | 64.1026 | 56.4103 | `candidate.cpp` |
| 5 | different | 35.3261 | 19.5652 | `candidate.cpp` |

## Outcome

Five released-source string-return variants reproduced formatting, temporary destruction, return construction, and by-value cleanup at exact size; GCC2 prologue and argument scheduling remained different.
