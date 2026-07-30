# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZUsZt10_Select1st1Zt4pair2ZC7stringxZUsZt4less1Z7stringxZt12my_allocator1ZUsP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZUs

- Address: `0x0035A540`
- Size: `0x428` (1064 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact GCC 2/libstdc++ `_Rb_tree::_M_insert` body from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h` (repository release copy `tmp/source_first/0013F330/release/stl_tree.h:819-851`), instantiated with source-faithful `stringx`, `pair<const stringx, unsigned short>`, `less<stringx>`, and `my_allocator<unsigned short>` declarations reused from repository prior art. The sole candidate failed because the isolated compiler could not find `stddef.h`, `stl_alloc.h`, or `stl_tree.h`. No alternate, retry, or tool change was attempted.

## Outcome

The sole exact GCC 2 _Rb_tree::_M_insert instantiation failed isolated compilation because standard headers were unavailable; no alternate was tried.
