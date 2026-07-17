# camera_set_collide_with_world__6entityb

- Address: `0x00145148`
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

The base camera collision hook is assertion-only outside Final builds. The
empty bool-parameter method matched immediately.

## Outcome

The base camera collision hook is assertion-only outside Final builds. The empty bool-parameter method matched on the first candidate and preserved the exact ROM checksum.
