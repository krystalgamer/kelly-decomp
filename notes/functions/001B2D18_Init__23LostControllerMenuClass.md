# Init__23LostControllerMenuClass

- Address: `0x001B2D18`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.2727 | 0.0 | `size44-fe-text-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-fe-text-core-2.cpp` |

### Attempt 1 notes

The exact released body collapses the base initializer to a 24-byte sibling
call.

### Attempt 2 notes

An ordinary local base-initializer pointer retains the target call frame.

## Outcome

The shared menu layout matches without a compiler barrier.
