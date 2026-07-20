# GetStartPosition__11game_camera

- Address: `0x002FEDA8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `camera.h`
- Reference source: `KS/SRC/camera.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.5 | 20.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A POD vector return used 64-bit aggregate loads/stores instead of the target scalar float copy.

### Attempt 2 notes

The released virtual default returns the global zero vector; the absolute alias uses the carried `%hi` spelling required by its negative low half.

## Outcome

The released `game_camera::GetStartPosition` implementation matched exactly.
