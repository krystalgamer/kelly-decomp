# has_mesh__6entity

- Address: `0x00139AF8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the virtual `get_mesh` slots and normalizes its pointer result to bool.

## Outcome

The released `entity::has_mesh` implementation matched exactly.
