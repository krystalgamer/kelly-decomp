# calcSavedGameSize__16GenericGameSaver

- Address: `0x001E4028`
- Size: `0x6C` (108 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.4194 | 45.1613 | `candidate.cpp` |
| 2 | different | 89.8148 | 70.3704 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the base save size, stash-only flag, icon file load, unsigned block rounding, and final file-count increment. Fixed size/total registers matched on attempt 3.

## Outcome

Matched saved game size calculation
