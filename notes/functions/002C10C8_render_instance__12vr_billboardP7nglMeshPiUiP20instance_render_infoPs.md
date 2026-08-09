# render_instance__12vr_billboardP7nglMeshPiUiP20instance_render_infoPs

- Address: `0x002C10C8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/billboard.cpp`
- Reference source: `KS/SRC/billboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared `vr_billboard` declaration preserves the released mesh overload's
virtual `render_batch` call and inserted instance count of one.

## Outcome

The manual vtable-slot layout was removed; the released wrapper still matches
exactly through the canonical billboard hierarchy.
