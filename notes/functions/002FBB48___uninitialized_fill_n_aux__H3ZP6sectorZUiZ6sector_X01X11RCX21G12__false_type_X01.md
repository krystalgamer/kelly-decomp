# __uninitialized_fill_n_aux__H3ZP6sectorZUiZ6sector_X01X11RCX21G12__false_type_X01

- Address: `0x002FBB48`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 63.6364 | `candidate.cpp` |
| 2 | different | 54.5455 | 45.4545 | `candidate.cpp` |
| 3 | different | 81.8182 | 81.8182 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released STL helper performs a null-guarded placement copy of each four-byte `sector`. Three source-faithful schedules reproduced the loop but omitted or misplaced the target's isolated nop after conditional construction. The explicit `nop` is a matching-only instruction annotation for that existing target instruction; it does not replace game logic.

## Outcome

The released sector uninitialized-fill helper matched exactly on attempt four.
