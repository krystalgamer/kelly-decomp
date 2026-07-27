# insert__t4list2Z12game_processZt12my_allocator1Z12game_processGt14_List_iterator3Z12game_processZR12game_processZP12game_processUiRC12game_process

- Address: `0x002AF708`
- Size: `0xE8` (232 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.0862 | 17.2414 | `candidate-1-exact-released.cpp` |
| 2 | different | 38.9831 | 16.9492 | `candidate-2-pool-and-explicit-construct-guard.cpp` |
| 3 | different | 35.3448 | 10.3448 | `candidate-3-hoisted-pool-context.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate-4-post-check-pool-result.cpp` |
| 5 | different | 81.4655 | 74.1379 | `candidate-5-canonical.cpp` |

### Attempt 4 notes

Matched the released generic fill-insert algorithm with the canonical allocator/list consolidation. Integrated code reused the exact reviewed attempt-4 structure; the 6-job build completed in 23 seconds and passed the exact ROM gate.

## Outcome

Matched the generic GCC 2.95.3 list fill-insert for game_process after extending the canonical old-STL list/allocator context and adding a reusable authentic game_process declaration. The 6-job integration build completed in 23 seconds and passed ROM/reference.
