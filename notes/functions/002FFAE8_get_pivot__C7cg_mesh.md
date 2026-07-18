# get_pivot__C7cg_mesh

- Address: `0x002FFAE8`
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

The released accessor returns a reference to `pivot` at offset `0x58`.

## Outcome

The released `cg_mesh::get_pivot` address calculation matched exactly on the first attempt.
