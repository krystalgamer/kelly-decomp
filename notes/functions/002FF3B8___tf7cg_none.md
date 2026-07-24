# __tf7cg_none

- Address: `0x002FF3B8`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.h`
- Reference source: `KS/SRC/colgeom.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred cg_none RTTI generation after five source-level attempts; the released collision_geometry inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
