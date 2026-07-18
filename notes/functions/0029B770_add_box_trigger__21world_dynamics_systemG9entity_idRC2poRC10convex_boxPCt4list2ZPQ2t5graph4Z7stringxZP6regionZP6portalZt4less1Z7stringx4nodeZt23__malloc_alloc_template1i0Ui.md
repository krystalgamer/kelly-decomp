# add_box_trigger__21world_dynamics_systemG9entity_idRC2poRC10convex_boxPCt4list2ZPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt23__malloc_alloc_template1i0Ui

- Address: `0x0029B770`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With `ECULL` disabled, the released method returns `NULL`. A GNU asm label preserves the authoritative long STL-derived symbol without reconstructing unrelated `region_node_list` template internals in this isolated source unit.

## Outcome

The configuration-reduced null `world_dynamics_system::add_box_trigger` factory matched exactly on the first attempt; its authoritative symbol is retained through a documented asm-label bridge.
