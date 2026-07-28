# collide_capsule_full_mesh__FPC17collision_capsulePC7cg_meshPt6vector2Z8vector3dZt12my_allocator1Z8vector3dN22UiRC8vector3d

- Address: `0x002DD8A0`
- Size: `0x180` (384 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Released body copied from `kelly-slaters-pro-surfer/KS/SRC/collide.cpp:739-765` with isolated declarations.

Sole attempt: `symbol_missing`, score 0.0. The allocator-equivalent vector parameters compressed to `T2` in the emitted symbol, so the requested symbol was not emitted. See `tmp/functions/002DD8A0_collide_capsule_full_mesh__FPC17collision_capsulePC7cg_meshPt6vector2Z8vector3dZt12my_allocator1Z8_8e8be3a79941/attempt-1/result.json`.

## Outcome

The exact released capsule mesh collision emitted no target symbol; no variant was attempted.
