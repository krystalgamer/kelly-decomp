# __9entity_idPCc

- Address: `0x001289E0`
- Size: `0x28` (40 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-entity-core.cpp` |

### Attempt 1 notes

The shared constructor directly delegates to `set_entity_id`; the constructor ABI naturally preserves the returned object pointer.

## Outcome

The released `entity_id` string constructor matched exactly.
