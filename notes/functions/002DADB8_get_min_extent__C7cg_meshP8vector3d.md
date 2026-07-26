# get_min_extent__C7cg_meshP8vector3d

- Address: `0x002DADB8`
- Size: `0xE4` (228 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 25.8772 | 8.7719 | `candidate.cpp` |
| 3 | different | 27.193 | 8.7719 | `candidate.cpp` |
| 4 | different | 27.193 | 8.7719 | `candidate.cpp` |
| 5 | different | 41.6667 | 24.5614 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released minimum-extent loop, mesh and vertex layouts, FLT_MAX value, comparisons, and leaf behavior are recovered, but legacy register allocation around the inlined vector accessors remains four bytes short.
