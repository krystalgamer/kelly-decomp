# Update__15MultiplayerMenuf

- Address: `0x00183C58`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.2727 | 45.4545 | `size44-menu-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-menu-core-2.cpp` |

### Attempt 1 notes

The exact released body turns `UpdateDisable` into a sibling jump.

### Attempt 2 notes

An ordinary local update-function pointer retains the target second call.

## Outcome

The released update matches without a compiler barrier.
