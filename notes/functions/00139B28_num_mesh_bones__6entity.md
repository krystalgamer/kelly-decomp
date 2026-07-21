# num_mesh_bones__6entity

- Address: `0x00139B28`
- Size: `0x48` (72 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.2778 | 27.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body, mesh NBones offset, has_mesh helper, and reconstructed the entity virtual slot layout.

### Attempt 2 notes

Inverted the behavior-equivalent condition after the diff showed the target positive-path fallthrough and explicit zero return branch.

## Outcome

The mesh bone count matches exactly.
