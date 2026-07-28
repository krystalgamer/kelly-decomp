# insert_unique__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1st1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt4less1ZiZt12my_allocator1ZPQ221world_dynamics_system17surface_type_infoGt17_Rb_tree_iterator3Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZRt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZPt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoRCt4pair2ZCiZPQ221world_dynamics_system17surface_type_info

- Address: `0x002B2B10`
- Size: `0x1B0` (432 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.9907 | 0.9804 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 77 lane A2 — 0x002B2B10

- Status: **source_pending** (`different`)
- Attempts: **1**
- Byte score: **21.9907%** (95/432)
- Instruction score: **0.9804%** (1/102)
- Candidate: `tmp/functions/002B2B10_insert_unique__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1s_a6fc4db670ec/attempt-1/candidate.cpp`
- SHA-1: `37b9be05c33dc4f754b059d68dba63cdffe59562`
- Candidate/target size: 396/432 bytes
- Started: `2026-07-28T17:44:28.910000000Z`
- Completed: `2026-07-28T17:50:52.622417107Z`
- Duration: **383.712417s**

The exact GCC 2.95.2 SGI `stl_tree.h` hinted `insert_unique(iterator, const value_type&)` body was tested once with minimal declarations for the released `map<int, world_dynamics_system::surface_type_info*>` specialization. It compiled but differed. No variants, retries, diff chasing, finalization, integration, build, tracked-file edits, commit, or push were performed.

## Citations

- `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- `kelly-slaters-pro-surfer/KS/SRC/wds.h:455-465`
- `tmp/functions/002B2B10_insert_unique__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1s_a6fc4db670ec/attempt-1/result.json`

## Outcome

The exact released surface-type map insertion differed at 21.9907% byte score; no source variant was attempted.
