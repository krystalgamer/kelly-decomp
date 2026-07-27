# render_colgeom__FPC18collision_geometryG7color32PC6entity

- Address: `0x002C9148`
- Size: `0xE8` (232 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/debug_render.cpp`
- Reference source: `KS/SRC/debug_render.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-canonical.cpp` |

### Attempt 1 notes

Compiled the exact released collision-geometry dispatch with source-faithful collision_geometry virtual order, capsule layout, canonical entity/po accessors, render helpers, color, and object-type constants. Capsule, mesh, null-geometry sphere fallback, vtable adjustments, identity transform, and all 232 bytes/58 instructions matched on the first attempt.

### Attempt 2 notes

Revalidated the exact released dispatch after consolidating canonical collision geometry/capsule declarations and a reusable debug-render helper header. The 7-job build completed in 22 seconds and passed the ROM gate.

## Outcome

Matched the exact released collision-geometry debug renderer after consolidating the canonical collision virtual hierarchy, capsule accessor, cg_mesh type, entity transform path, and debug-render helper bindings. The 7-job build completed in 22 seconds.
