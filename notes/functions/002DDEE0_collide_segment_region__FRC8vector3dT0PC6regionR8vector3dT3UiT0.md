# collide_segment_region__FRC8vector3dT0PC6regionR8vector3dT3UiT0

- Address: `0x002DDEE0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-collision-cheat-core.cpp` |

### Attempt 1 notes

The first candidate failed due to an access or exact signature-mangling mismatch.

### Attempt 2 notes

The shared world and terrain declarations forward the segment endpoints and
output vectors to terrain intersection.

## Outcome

The local world layout was removed.
