# OnTriangle__15ReplayMenuClassi

- Address: `0x001B0A78`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.4545 | 9.0909 | `size44-menu-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-menu-core-2.cpp` |

### Attempt 1 notes

The exact released conditional base call collapses to a 32-byte sibling call.

### Attempt 2 notes

An ordinary local base-handler pointer retains the target call frame.

## Outcome

The shared replay menu layout matches without a compiler barrier.
