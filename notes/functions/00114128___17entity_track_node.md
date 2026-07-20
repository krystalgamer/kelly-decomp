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
| 1 | matched | 100.0 | 100.0 | `entity_track_node_candidate.cpp` |

### Attempt 1 notes

A minimal layout preserves the released sentinel, active flag, and four cleared tail fields.

## Outcome

The released `entity_track_node` constructor matched exactly.
