# fill__H2ZPQ213light_manager9light_recZQ213light_manager9light_rec_X01X01RCX11_v

- Address: `0x002F3DF0`
- Size: `0xCC` (204 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 27.6786 | 0.0 | `candidate.cpp` |
| 4 | different | 25.0 | 0.0 | `candidate.cpp` |
| 5 | different | 25.0 | 0.0 | `candidate.cpp` |

## Outcome

The released fill loop was recovered, but old-STL aggregate copy grouping and register scheduling remained irreducible after five source-level attempts.
