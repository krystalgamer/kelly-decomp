# collide_capsule_mesh__FPC17collision_capsulePC7cg_meshPt6vector2Z8vector3dZt12my_allocator1Z8vector3dN22UiRC8vector3d

- Address: `0x002DD6D0`
- Size: `0x1CC` (460 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass wave 83 lane B5

- Exact released body from `kelly-slaters-pro-surfer/KS/SRC/collide.cpp:702-736`.
- One LF-terminated self-contained candidate; no unavailable headers.
- Result: `symbol_missing`, score 0.0; emitted repeated-parameter mangling used `T2T2` instead of the target's fully spelled vector-pointer parameters.
- Candidate SHA-1: `39bb072c02b39d360b4d2037917b05c8e2a5cb26`.
- Exactly one attempt; no retry, variant, post-test chase, tracked edit, finalize, integration, or build.

## Outcome

The exact released capsule-mesh collision candidate compiled without emitting the target symbol; no source variant was attempted.
