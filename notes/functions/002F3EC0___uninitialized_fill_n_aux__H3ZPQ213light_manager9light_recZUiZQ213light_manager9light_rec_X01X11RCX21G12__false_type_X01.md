# __uninitialized_fill_n_aux__H3ZPQ213light_manager9light_recZUiZQ213light_manager9light_rec_X01X11RCX21G12__false_type_X01

- Address: `0x002F3EC0`
- Size: `0xCC` (204 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.3725 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 33.4906 | 1.8868 | `candidate.cpp` |
| 4 | different | 25.9804 | 0.0 | `candidate.cpp` |
| 5 | different | 25.9804 | 0.0 | `candidate.cpp` |

## Outcome

The released uninitialized fill loop was recovered, but aggregate construction inlining and component scheduling remained irreducible after five source-level attempts.
