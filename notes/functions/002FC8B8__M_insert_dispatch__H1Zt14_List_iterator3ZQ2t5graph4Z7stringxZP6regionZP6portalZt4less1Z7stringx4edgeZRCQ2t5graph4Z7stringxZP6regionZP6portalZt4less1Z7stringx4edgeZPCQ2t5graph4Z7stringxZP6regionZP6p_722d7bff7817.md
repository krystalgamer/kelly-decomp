# _M_insert_dispatch__H1Zt14_List_iterator3ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeZRCQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeZPCQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edge_t4list2ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeZt12my_allocator1ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeGt14_List_iterator3ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeZRQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeX00X00G12__false_type_v

- Address: `0x002FC8B8`
- Size: `0xD8` (216 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 42.1296 | 18.5185 | `candidate.cpp` |
| 4 | different | 42.1296 | 18.5185 | `candidate.cpp` |
| 5 | different | 83.3333 | 72.2222 | `candidate.cpp` |

## Outcome

Deferred after five source-level attempts. The exact GCC2 dispatch template reached the correct 216-byte size and 83.3333% byte score, but allocator, iterator, and copy scheduling remained different.
