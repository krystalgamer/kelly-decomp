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

Minimal mesh, section, and material layouts preserve the released pointer chain and map field.

## Outcome

The released `entity::set_mesh_texture` implementation matched exactly.
