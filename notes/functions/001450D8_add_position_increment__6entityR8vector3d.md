# add_position_increment__6entityR8vector3d

- Address: `0x001450D8`
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

The base position-increment hook asserts only outside Final builds and then
returns `false`. The fallback matched immediately.

## Outcome

The base position-increment hook asserts only outside Final builds and then returns false. The first candidate matched exactly and preserved the byte-identical integrated ROM.
