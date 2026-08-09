# __3skyRC9entity_id15entity_flavor_t

- Address: `0x0028CD90`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/sky.cpp`
- Reference source: `KS/SRC/sky.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor uses the shared `sky`/`entity` hierarchy with zero
flags. The isolated old-GCC vtable symbol retains its carried alias.

## Outcome

The local entity, sky, and vtable layouts were removed.
