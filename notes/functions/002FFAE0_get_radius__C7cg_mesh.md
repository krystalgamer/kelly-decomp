# get_radius__C7cg_mesh

- Address: `0x002FFAE0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colmesh.h`
- Reference source: `KS/SRC/colmesh.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns `radius` from offset `0x6C`.

## Outcome

The released `cg_mesh::get_radius` accessor matched exactly on the first attempt.
