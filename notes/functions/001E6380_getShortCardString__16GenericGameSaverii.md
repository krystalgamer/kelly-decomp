# getShortCardString__16GenericGameSaverii

- Address: `0x001E6380`
- Size: `0x48` (72 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reused the shared released GenericGameSaver, stringx, and global-text declarations; the exact released body matched on attempt one.

## Outcome

The short PS2 memory-card label matches exactly from released source.
