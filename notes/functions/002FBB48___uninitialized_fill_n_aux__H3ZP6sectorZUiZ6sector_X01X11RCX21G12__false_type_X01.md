# __uninitialized_fill_n_aux__H3ZP6sectorZUiZ6sector_X01X11RCX21G12__false_type_X01

- Address: `0x002FBB48`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 63.6364 | `candidate.cpp` |
| 2 | different | 54.5455 | 45.4545 | `candidate.cpp` |
| 3 | different | 81.8182 | 81.8182 | `candidate.cpp` |

## Outcome

The only exact form added an explicit scheduling nop. It was removed and the
source-faithful helper was deferred after three native attempts.
