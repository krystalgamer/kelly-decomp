# _M_erase__t8_Rb_tree5Z7stringxZ7stringxZt9_Identity1Z7stringxZt4less1Z7stringxZt12my_allocator1Z7stringxPt13_Rb_tree_node1Z7stringx

- Address: `0x0035BEF0`
- Size: `0x7C` (124 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released recursive string red-black-tree erase matched with the string allocator free-list overlay and an absolute alias for self-recursion.

## Outcome

The released string red-black-tree erase matched exactly on the first attempt.
