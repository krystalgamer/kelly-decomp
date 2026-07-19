# find_sector__C7terrainRC8vector3d

- Address: `0x002EC610`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/terrain.cpp`
- Reference source: `KS/SRC/terrain.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `tree` at offset 0x34; retaining the result across a barrier preserves the wrapper.

## Outcome

The released `terrain::find_sector` wrapper matched exactly on the first attempt.
