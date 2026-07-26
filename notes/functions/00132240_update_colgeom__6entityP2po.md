# update_colgeom__6entityP2po

- Address: `0x00132240`
- Size: `0xC0` (192 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.5833 | 87.5 | `candidate.cpp` |
| 2 | different | 89.5833 | 87.5 | `candidate.cpp` |
| 3 | different | 33.3333 | 25.0 | `candidate.cpp` |
| 4 | different | 42.7083 | 25.0 | `candidate.cpp` |
| 5 | different | 89.5833 | 87.5 | `candidate.cpp` |

### Attempt 1 notes

The exact released body matched 42 of 48 instructions. The remaining
difference was the far `get_colgeom_root_po` virtual slot and its load order.

### Attempt 5 notes

Cached, unified-transform, barrier, and const-pointer forms could not recover
the target's complete entity vtable context.

## Outcome

The released collision-geometry update matched 42 of 48 instructions, but the reduced shared entity hierarchy could not reproduce the distant root-transform virtual slot.
