# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP13script_objectZt10_Select1st1Zt4pair2ZC7stringxZP13script_objectZt4less1Z7stringxZt12my_allocator1ZP13script_objectP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZP13script_object

- Address: `0x0035D218`
- Size: `0x428` (1064 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.8534 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 170 lane A2

Exact GCC 2 `_Rb_tree::_M_insert` body tested once for `0x0035D218`, from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h:819-853`, with source-faithful `stringx` layout/comparison from `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-244,480-483`, the released `script_object` declaration from `kelly-slaters-pro-surfer/KS/SRC/script_object.h:27-115`, and the exact `map<stringx,script_object*>` alias from `kelly-slaters-pro-surfer/KS/SRC/script_object.h:215-216`. Attempts before: 0. Result `different`, byte score 3.8534% and instruction score 0.0000%. No alternate was tried.

## Outcome

The exact GCC 2 script-object map insertion candidate compiled but differed at 3.8534% bytes and 0.0000% instructions; no alternate source was attempted.
