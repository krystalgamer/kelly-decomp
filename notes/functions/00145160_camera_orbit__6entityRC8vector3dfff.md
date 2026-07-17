# camera_orbit__6entityRC8vector3dfff

- Address: `0x00145160`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base orbit hook is assertion-only outside Final builds. The empty
four-argument method matched on the first candidate.

## Outcome

The base camera orbit hook is assertion-only outside Final builds. The empty complete-signature method matched on the first candidate and preserved the exact ROM checksum.
