# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP17entity_track_treeZt10_Select1st1Zt4pair2ZC7stringxZP17entity_track_treeZt4less1Z7stringxZt12my_allocator1ZP17entity_track_treeP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZP17entity_track_tree

- Address: `0x0011F0A0`
- Size: `0x428` (1064 bytes)
- Object: `game/files_anim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.8534 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 169 lane B1

Exact GCC 2/libstdc++ `_Rb_tree::_M_insert` body from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h` (released copy `tmp/source_first/0013F330/release/stl_tree.h:819-853`) tested with released `stringx` layout/comparison (`kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-244,480-483`) and `map<stringx,entity_track_tree*>` declaration (`kelly-slaters-pro-surfer/KS/SRC/scene_anim.h:21-26`). Attempts before: 0. Result `different`, byte score 3.8534% and instruction score 0.0000%. No alternate was tried; no retry, diff chase, build, finalize, integration, or tracked edit.

## Outcome

The exact released GCC 2 entity-track-tree map insertion candidate compiled but differed at 3.8534% bytes and 0.0000% instructions; no alternate source was attempted.
