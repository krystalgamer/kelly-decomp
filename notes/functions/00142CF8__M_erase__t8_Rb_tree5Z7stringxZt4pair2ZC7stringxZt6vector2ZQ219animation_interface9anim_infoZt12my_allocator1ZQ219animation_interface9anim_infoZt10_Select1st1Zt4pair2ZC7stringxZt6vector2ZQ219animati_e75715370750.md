# _M_erase__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZt10_Select1st1Zt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoZQ219animation_interface9s_t_s_t_rZt12my_allocator1Zt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_infoPt13_Rb_tree_node1Zt4pair2ZC7stringxZt6vector2ZQ219animation_interface9anim_infoZt12my_allocator1ZQ219animation_interface9anim_info

- Address: `0x00142CF8`
- Size: `0x140` (320 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.5625 | 2.5 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released/toolchain template

- FIRST PASS wave 29 lane B2 for `0x00142CF8`.
- Tested the canonical GCC 2 STL `_Rb_tree::_M_erase` algorithm exactly once: recursively erase the right subtree, retain the left subtree, destroy the stored `pair<const stringx, vector<animation_interface::anim_info> >`, return the node through `my_allocator`, then continue down the left subtree.
- Minimal declarations preserve the released `stringx`, `anim_info`, vector, pair, tree-node, and allocator roles.
- Result: **different** — 37/320 bytes (11.5625%) and 2/80 instructions (2.5%); candidate size 128 versus target size 320.
- No variants, diff chasing, build, finalization, integration, queue/tool edits, commit, or push were attempted.

## Citations

- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Type ownership: `kelly-slaters-pro-surfer/KS/SRC/animation_interface.h:30-48`
- Result: `attempt-1/result.json`

## Outcome

The exact released animation-map RB-tree erase helper differed from the target; the sole attempt scored 11.5625%.
