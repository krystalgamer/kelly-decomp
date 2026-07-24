# _M_erase__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionPt13_Rb_tree_node1ZP6region

- Address: `0x002AFDC8`
- Size: `0x6C` (108 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact recursive right-subtree erase, left traversal, and shared node allocator free-list links. Reusing the established fixed high-half pattern matched on attempt 1.

## Outcome

Matched region tree erase
