# ClipQuadToPlane__FRC5planePPC8vector3dP8vector3d

- Address: `0x002E5750`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/portal.cpp`
- Reference source: `KS/SRC/portal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.6875 | 37.5 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 61.7188 | 43.75 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 95.3125 | 87.5 | `candidate.cpp` |

## Outcome

Deferred the released quad-plane clipping wrapper after five source-level attempts; the closest candidate reached 95.31%, but four loop setup and normal-component register choices differed.
