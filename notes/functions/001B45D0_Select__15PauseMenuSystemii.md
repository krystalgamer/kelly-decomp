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

Reconstructed the released indexed menu lookup and virtual Select dispatch with recovered menus, FEMenu vtable, and Select-slot layouts. All 60 bytes matched on the first attempt.

## Outcome

The released PauseMenuSystem selection exactly matches the indexed FEMenu lookup and authentic virtual Select dispatch.
