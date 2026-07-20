# __uninitialized_copy_aux__H2ZPQ2t7bp_tree2Z10partition3Z8vector3d6branchZPQ2t7bp_tree2Z10partition3Z8vector3d6branch_X01X01X11G12__false_type_X11

- Address: `0x002FBE88`
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

The canonical old-STL placement-copy loop matched exactly with 12-byte branch records whose copy constructor transfers the two pointer fields at offsets 0x4 and 0x8.

## Outcome

The released partition-branch uninitialized-copy helper matched exactly on the first attempt.
