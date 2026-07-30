# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP6entityZt10_Select1st1Zt4pair2ZC7stringxZP6entityZt4less1Z7stringxZt12my_allocator1ZP6entityP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZP6entity

- Address: `0x0010F3A0`
- Size: `0x428` (1064 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.9211 | 0.3759 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 169 lane A5

Tested exactly one released-source candidate for `0x0010F3A0`: the GCC 2/libstdc++ `_Rb_tree::_M_insert` body from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`, instantiated with released `stringx` declarations/comparator from `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-236,480-483`, released `my_allocator` from `kelly-slaters-pro-surfer/KS/SRC/custom_stl.h:423-487`, `pair<const stringx, entity*>`, and the source-faithful tree layout used by prior `_M_insert` scratch `0x00143070`. Result: `different`, byte score 5.9211%, instruction score 0.3759%. No alternate was tried.

## Outcome

Exact released GCC 2/libstdc++ _Rb_tree::_M_insert instantiated for pair<const stringx, entity*> differed; no alternate was tried.
