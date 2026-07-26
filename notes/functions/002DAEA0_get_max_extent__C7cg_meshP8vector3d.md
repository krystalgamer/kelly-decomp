# get_max_extent__C7cg_meshP8vector3d

- Address: `0x002DAEA0`
- Size: `0xE4` (228 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.5088 | 10.5263 | `candidate.cpp` |
| 2 | different | 40.3509 | 22.807 | `candidate.cpp` |
| 3 | different | 57.0175 | 35.0877 | `candidate.cpp` |
| 4 | different | 40.3509 | 22.807 | `candidate.cpp` |
| 5 | different | 57.0175 | 35.0877 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released maximum-extent loop reaches exact size with authentic mesh/vertex layout and comparison behavior, but the compiler assigns the mesh and vector bases to different registers throughout the otherwise equivalent code.
