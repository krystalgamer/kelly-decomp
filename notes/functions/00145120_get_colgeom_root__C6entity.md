# get_colgeom_root__C6entity

- Address: `0x00145120`
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

The base collision root is the entity itself. Returning `this` matched the
target register move.

## Outcome

The base collision root is the entity itself. Returning this matched on the first candidate and preserved the byte-identical integrated ROM.
