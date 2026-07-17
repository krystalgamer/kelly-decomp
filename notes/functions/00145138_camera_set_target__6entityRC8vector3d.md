# camera_set_target__6entityRC8vector3d

- Address: `0x00145138`
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

The base camera target hook contains only an assertion, removed in the Final
build. The empty full-signature method matched immediately.

## Outcome

The base camera target hook contains only an assertion, removed in the Final build. The empty full-signature method matched on the first candidate and preserved the exact ROM checksum.
