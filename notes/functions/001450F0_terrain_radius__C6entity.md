# terrain_radius__C6entity

- Address: `0x001450F0`
- Size: `0x28` (40 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC virtual table layout preserves the this-adjustment and terrain-radius function slots.

## Outcome

The released base `entity::terrain_radius` virtual thunk matched exactly.
