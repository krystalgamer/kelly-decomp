# insert_unique__t8_Rb_tree5ZiZt4pair2ZCiZ12game_controlZt10_Select1st1Zt4pair2ZCiZ12game_controlZt4less1ZiZt12my_allocator1Z12game_controlGt17_Rb_tree_iterator3Zt4pair2ZCiZ12game_controlZRt4pair2ZCiZ12game_controlZPt4pair2ZCiZ12game_controlRCt4pair2ZCiZ12game_control

- Address: `0x00359010`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.4545 | 13.8889 | `candidate.cpp` |

### Attempt 1 notes

# 0x00359010 source-first attempt 1

- Exact source: GCC 2.95.2 `libstdc++/stl/stl_tree.h:899-930`, `_Rb_tree::insert_unique(iterator, const value_type&)`.
- Exact instantiation: `map<control_id_t, game_control>` from `inputmgr.h`; pointer-header RB-tree layout and canonical inline iterator decrement were retained.
- One candidate/test only: `different`, score `35.4545%`, instruction score `13.8889%`; candidate `0x1b8` bytes versus target `0x1b0`.
- First-pass stop: no retry, finalize, integration, build, tracked/reference edit, or commit.

## Timing

- Start: `2026-07-28T17:46:34.842932Z`
- End: `2026-07-28T17:53:53.607540Z`
- Elapsed: `438.764456 s`

## Outcome

The exact released game-control map insertion differed at 35.4545% byte score; no source variant was attempted.
