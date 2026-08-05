# __17entity_track_node

- Address: `0x00114128`
- Size: `0x28` (40 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-entity-core.cpp` |

### Attempt 1 notes

The shared `entity_track_node` declaration preserves the released sentinel, ownership flag, and four cleared pointers.

## Outcome

The released `entity_track_node` constructor matched exactly.
