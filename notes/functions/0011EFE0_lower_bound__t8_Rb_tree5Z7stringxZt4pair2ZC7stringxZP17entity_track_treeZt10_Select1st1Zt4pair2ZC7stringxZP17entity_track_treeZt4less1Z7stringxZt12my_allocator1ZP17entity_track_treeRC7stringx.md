# lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP17entity_track_treeZt10_Select1st1Zt4pair2ZC7stringxZP17entity_track_treeZt4less1Z7stringxZt12my_allocator1ZP17entity_track_treeRC7stringx

- Address: `0x0011EFE0`
- Size: `0xC0` (192 bytes)
- Object: `game/files_anim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.1042 | 16.6667 | `candidate.cpp` |
| 2 | different | 44.7917 | 22.9167 | `candidate.cpp` |
| 3 | different | 44.7917 | 22.9167 | `candidate.cpp` |
| 4 | different | 46.875 | 29.1667 | `candidate.cpp` |
| 5 | different | 29.6875 | 10.4167 | `candidate.cpp` |

### Attempt 2 notes

Restoring the nontrivial GNU 2 iterator copy recovered the hidden return
parameter and target size, but the inlined string comparison used different
registers and branch scheduling.

### Attempt 4 notes

Binding the result and traversal nodes to their target registers improved the
score, but the compiler still rotated the root-null and comparison blocks.

## Outcome

The GNU 2 lower-bound logic retained divergent inlined string-comparison registers and loop rotation after five source-level attempts.
