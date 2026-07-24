# __uninitialized_fill_n_aux__H3ZP14particle_forceZUiZ14particle_force_X01X11RCX21G12__false_type_X01

- Address: `0x002F5128`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.5484 | 0.0 | `candidate.cpp` |
| 2 | different | 37.0968 | 9.6774 | `candidate.cpp` |
| 3 | different | 33.8235 | 2.9412 | `candidate.cpp` |
| 4 | different | 14.5833 | 0.0 | `candidate.cpp` |
| 5 | different | 36.3636 | 3.0303 | `candidate.cpp` |

## Outcome

Deferred the released particle-force uninitialized fill after five source-level attempts; the reconstructed copy constructor and null-aware placement loop could not reproduce the target destination-pointer schedule.
