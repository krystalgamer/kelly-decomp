# __uninitialized_copy_aux__H2ZP6sectorZP6sector_X01X01X11G12__false_type_X11

- Address: `0x002FD088`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released STL helper performs a null-guarded placement copy of each four-byte `sector`; the canonical loop reproduces the branch-likely null path and both iterator increments exactly.

## Outcome

The released sector uninitialized-copy helper matched exactly on the first attempt.
