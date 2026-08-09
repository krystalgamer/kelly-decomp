# Select__15PauseMenuSystemii

- Address: `0x001B45D0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released indexed lookup and virtual `Select` dispatch use the shared pause
system and menu hierarchy.

## Outcome

The manual menu and vtable layouts were removed.
