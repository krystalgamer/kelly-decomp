# _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolPt13_Rb_tree_node1Zt4pair2ZC7stringxZP11entity_pool

- Address: `0x00311540`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released recursive red-black-tree erase matched with the established allocator free-list overlay and an absolute alias for the self-recursive call.

## Outcome

The released entity-pool-map red-black-tree erase matched exactly on the first attempt.
