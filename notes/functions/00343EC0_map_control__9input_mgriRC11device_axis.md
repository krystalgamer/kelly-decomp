# map_control__9input_mgriRC11device_axis

- Address: `0x00343EC0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 41.3043 | 17.3913 | `candidate.cpp` |
| 3 | different | 66.8478 | 21.7391 | `candidate.cpp` |
| 4 | different | 69.0217 | 43.4783 | `candidate.cpp` |
| 5 | different | 72.8261 | 54.3478 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the exact released input-manager map lookup and GNU 2 list insertion using shared source-faithful `device_axis`, `game_control`, map-node, allocator, iterator, placement-copy, and link-update declarations. Five candidates reached the correct operations but could not reproduce the target's iterator/key stack-slot placement and repeated sentinel reload schedule, so all shared experiments were reverted.

## Outcome

Deferred input control mapping after five source-level attempts could not reproduce the old-STL map/list stack and alias schedule.
