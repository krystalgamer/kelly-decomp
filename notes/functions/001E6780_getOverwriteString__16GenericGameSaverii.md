# getOverwriteString__16GenericGameSaverii

- Address: `0x001E6780`
- Size: `0x34` (52 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released global-text `c_str()` return matched exactly with the two-pointer `stringx` hidden-return ABI. `overwrite_text` aliases the chars field of the GT_FE_MENU_OVERWRITE entry at 0x003e6860.

## Outcome

The released game-saver overwrite string getter matched exactly on the first attempt.
