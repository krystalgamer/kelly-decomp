# set_lores_mesh__6entityP7nglMesh

- Address: `0x0012A428`
- Size: `0x3C` (60 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the target's source-level low-resolution mesh setup: call `FixupEntityMesh(mesh, 0)` and assign the recovered `lores_mesh` field at offset 0x130. All 60 bytes matched.

## Outcome

The low-resolution entity mesh setter exactly matches as FixupEntityMesh followed by assignment to the recovered lores_mesh field.
