# is_camera_collision__C7cg_mesh

- Address: `0x002FFB18`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colmesh.h`
- Reference source: `KS/SRC/colmesh.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor tests camera-collision bit 3 of `flags` at offset `0x64`.

## Outcome

The released `cg_mesh::is_camera_collision` bit test matched exactly on the first attempt.
