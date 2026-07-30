# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZsZt10_Select1st1Zt4pair2ZC7stringxZsZt4less1Z7stringxZt12my_allocator1ZsP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZs

- Address: `0x0013E5D0`
- Size: `0x428` (1064 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released GCC 2/libstdc++ `_Rb_tree::_M_insert` template from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h` (repository release copy `tmp/source_first/0013F330/release/stl_tree.h:819-851`), instantiated with released `stringx` layout (`kelly-slaters-pro-surfer/KS/SRC/stringx.h:230`), `pair<const stringx, signed short>`, `less<stringx>`, and released `my_allocator` declaration (`kelly-slaters-pro-surfer/KS/SRC/custom_stl.h:423`). The one source-faithful candidate compile failed because the isolated harness could not resolve the released standard headers. No alternate was tried.

## Outcome

The sole exact released-source _Rb_tree::_M_insert instantiation failed isolated compilation because released standard headers were unavailable; no alternate was tried.
