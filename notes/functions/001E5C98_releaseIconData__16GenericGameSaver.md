# releaseIconData__16GenericGameSaver

- Address: `0x001E5C98`
- Size: `0x38` (56 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released implementation conditionally releases the icon file buffer and always clears its `Buf` member. The recovered `icon` offset and `nglFileBuf` layout reproduce the branch-likely and call exactly.

## Outcome

The game-saver icon-data release matches with its released conditional file release and buffer clear.
