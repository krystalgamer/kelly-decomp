# UpdateInScene__19GraphicalMenuSystem

- Address: `0x001BE6F8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.3226 | 61.2903 | `candidate.cpp` |
| 2 | different | 98.3871 | 93.5484 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released active-menu and conditional beach-menu in-scene updates matched after restoring the active index at offset 0x7c.

## Outcome

The released graphical menu in-scene update matched exactly on the third attempt.
