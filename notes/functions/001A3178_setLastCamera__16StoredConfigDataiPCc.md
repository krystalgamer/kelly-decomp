# setLastCamera__16StoredConfigDataiPCc

- Address: `0x001A3178`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GameData.cpp`
- Reference source: `KS/SRC/ks/GameData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.6364 | 9.0909 | `size44-menu-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-menu-core-2.cpp` |

### Attempt 1 notes

The exact released call collapses to a 24-byte sibling jump.

### Attempt 2 notes

An ordinary local `strcpy` pointer retains the target call frame.

## Outcome

The shared stored-config layout matches without a compiler barrier.
