# __uninitialized_copy_aux__H2ZPQ221world_dynamics_system19entity_preload_pairZPQ221world_dynamics_system19entity_preload_pair_X01X01X11G12__false_type_X11

- Address: `0x002B6590`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.1667 | 30.0 | `candidate.cpp` |
| 2 | different | 95.0 | 100.0 | `candidate.cpp` |
| 3 | different | 95.0 | 93.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released uninitialized-copy loop matched after preserving the placement-construction null guard and defining the canonical string constructor and assignment addresses before code generation.

## Outcome

The released entity preload uninitialized copy matched exactly on the fourth attempt.
