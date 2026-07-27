# enable_marky_cam__4gamebT1f

- Address: `0x0027D9C0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 25.3846 | 12.3077 | `candidate.cpp` |
| 3 | different | 98.3333 | 96.6667 | `candidate.cpp` |
| 4 | different | 25.8333 | 3.3333 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Matched the released marky-camera arbitration after correcting the target signature and consolidating the camera/world ABI.

## Outcome

Matched the source-faithful marky-camera arbitration with the exact game, world, camera-priority, virtual-sync, and collision-control ABI.
