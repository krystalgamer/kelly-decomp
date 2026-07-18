# is_entity_collision__C7cg_mesh

- Address: `0x002FFB08`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colmesh.h`
- Reference source: `KS/SRC/colmesh.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released accessor tests entity-collision bit 2 of the signed `flags` word at offset `0x64`; restoring the signed type matched on attempt two.

## Outcome

The released `cg_mesh::is_entity_collision` bit test matched on attempt two with the signed flags type.
