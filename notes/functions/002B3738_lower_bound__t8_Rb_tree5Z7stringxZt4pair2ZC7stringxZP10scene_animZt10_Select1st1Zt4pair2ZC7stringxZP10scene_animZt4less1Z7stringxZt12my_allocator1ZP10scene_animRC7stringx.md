# lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animRC7stringx

- Address: `0x002B3738`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.8542 | 0.0 | `candidate.cpp` |
| 2 | different | 8.8542 | 0.0 | `candidate.cpp` |
| 3 | different | 7.2917 | 0.0 | `candidate.cpp` |
| 4 | different | 7.2917 | 0.0 | `candidate.cpp` |
| 5 | different | 7.2917 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

The source-faithful tree traversal could not reproduce the target's fully
inlined string comparator and iterator ABI register allocation.

### Attempt 5 notes

Inlining, target register bindings, explicit comparison storage, and a loop
barrier remained divergent.

## Outcome

Five source-level tree traversals could not reproduce the target's inlined string comparator and iterator ABI schedule.
