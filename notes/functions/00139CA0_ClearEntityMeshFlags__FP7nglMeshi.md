# ClearEntityMeshFlags__FP7nglMeshi

- Address: `0x00139CA0`
- Size: `0x54` (84 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released ClearEntityMeshFlags body and nglMesh/nglMeshSection/nglMaterial declarations. Reconstructed the section count, table, 0x40 section stride, material pointer, and flags field.

## Outcome

Matched released ClearEntityMeshFlags body
