# register_entity__14entity_managerP6entity

- Address: `0x00135950`
- Size: `0x110` (272 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `entity_manager::register_entity` body from `kelly-slaters-pro-surfer/KS/SRC/entity.cpp:4340-4351` with released map/entity declarations from `entity.h:171-263`. No variant or later attempt was made.

## Outcome

The exact released entity-registration definition failed the isolated compile in its released map declaration context; the sole attempt scored 0%.
