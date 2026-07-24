# _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZsZt10_Select1st1Zt4pair2ZC7stringxZsZt4less1Z7stringxZt12my_allocator1ZsPt13_Rb_tree_node1Zt4pair2ZC7stringxZs

- Address: `0x0010E930`
- Size: `0x7C` (124 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.8125 | 43.75 | `candidate.cpp` |
| 2 | different | 97.5806 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released recursive red-black subtree erase matched after using the allocator free-list overlay at node offset zero and an absolute recursion alias.

## Outcome

The released string-to-string tree erase matched exactly on the third attempt.
