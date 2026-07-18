# is_pivot_valid__C7cg_mesh

- Address: `0x002FFAF8`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colmesh.h`
- Reference source: `KS/SRC/colmesh.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override tests `FLAG_PIVOT_VALID`, bit zero of `flags` at offset `0x64`.

## Outcome

The released `cg_mesh::is_pivot_valid` flag test matched exactly on the first attempt.
