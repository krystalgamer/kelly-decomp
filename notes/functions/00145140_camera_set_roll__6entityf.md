# camera_set_roll__6entityf

- Address: `0x00145140`
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

The base camera roll hook is assertion-only outside Final builds. Its empty
float-parameter method matched on the first candidate.

## Outcome

The base camera roll hook is assertion-only outside Final builds. The empty float-parameter method matched on the first candidate and preserved the exact ROM checksum.
