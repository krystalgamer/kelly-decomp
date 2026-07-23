# find_intersection__7terrainRC8vector3dT1R8vector3dT3

- Address: `0x002E8DD8`
- Size: `0x54` (84 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/terrain.cpp`
- Reference source: `KS/SRC/terrain.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.381 | 4.7619 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released terrain wrapper, tree pointer offset, bp_tree iterator/branch declarations and explicit copy constructors, branch NONE value, and recurse_intersection signature. Reconstructing the nontrivial temporary/copy path matched byte-exactly on attempt 2.

## Outcome

Matched released terrain intersection wrapper
