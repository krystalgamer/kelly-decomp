# set_mesh_texture__6entityP10nglTexture

- Address: `0x00139D90`
- Size: `0x20` (32 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared entity, NGL mesh/section, and material declarations preserve the
released pointer chain and texture-map field.

## Outcome

The exact released implementation matches without local layout shells.
