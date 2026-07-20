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

A minimal old-GCC vtable layout preserves the released mesh overload's virtual `render_batch` call through slot 0xa0 and inserted constant 1.

## Outcome

The released mesh `vr_billboard::render_instance` overload matched exactly on the first attempt.
