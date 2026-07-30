# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZP10scene_anim

- Address: `0x002B37F8`
- Size: `0x428` (1064 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact GCC 2/libstdc++ `_Rb_tree::_M_insert` instantiation from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h:819-853`, using released `stringx` layout (`kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-244`), the released scene-animation map declaration (`kelly-slaters-pro-surfer/KS/SRC/wds.h:554-556`), and the authentic pair/comparator/allocator tree context. The one-shot candidate compile-failed because `<map>` was unavailable to the scratch compiler. No alternate was tried.

## Outcome

The exact released GCC 2 scene-animation map insertion instantiation was attempted once and compile-failed because the scratch compiler could not locate <map>; no alternate was tried.
