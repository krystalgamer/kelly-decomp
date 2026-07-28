# insert_unique__t8_Rb_tree5ZsZt4pair2ZCsZUiZt10_Select1st1Zt4pair2ZCsZUiZt4less1ZsZt12my_allocator1ZUiRCt4pair2ZCsZUi

- Address: `0x002F6C50`
- Size: `0x158` (344 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.6395 | 1.25 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact GCC 2.95 SGI RB-tree insert_unique algorithm instantiated for short-to-unsigned released map types. The result is preserved; no retry or variant was made.

## Outcome

The exact released short-key RB-tree insertion differed from the target; the sole attempt scored 20.6395%.
