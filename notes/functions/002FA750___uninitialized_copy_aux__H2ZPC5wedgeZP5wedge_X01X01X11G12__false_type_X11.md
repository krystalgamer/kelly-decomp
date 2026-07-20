# __uninitialized_copy_aux__H2ZPC5wedgeZP5wedge_X01X01X11G12__false_type_X11

- Address: `0x002FA750`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical old-STL null-guarded placement-copy loop reproduces the packed four-byte `lwl`/`lwr` and `swl`/`swr` wedge transfer exactly.

## Outcome

The released wedge uninitialized-copy helper matched exactly on the first attempt.
