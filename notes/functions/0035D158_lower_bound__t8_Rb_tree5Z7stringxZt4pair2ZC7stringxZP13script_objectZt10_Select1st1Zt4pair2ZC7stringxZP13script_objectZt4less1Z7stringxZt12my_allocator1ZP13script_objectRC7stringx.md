# lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP13script_objectZt10_Select1st1Zt4pair2ZC7stringxZP13script_objectZt4less1Z7stringxZt12my_allocator1ZP13script_objectRC7stringx

- Address: `0x0035D158`
- Size: `0xC0` (192 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.7917 | 22.9167 | `candidate.cpp` |
| 2 | different | 44.7917 | 22.9167 | `candidate.cpp` |
| 3 | different | 28.125 | 10.4167 | `candidate.cpp` |
| 4 | different | 47.9167 | 31.25 | `candidate.cpp` |
| 5 | different | 50.0 | 33.3333 | `candidate.cpp` |

## Outcome

Five attempts recovered the released tree walk and inline string comparison, but the old compiler's register assignment remained unreproducible.
