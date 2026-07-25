# resize__t4list2ZQ27ai_path8waypointZt12my_allocator1ZQ27ai_path8waypointUiRCQ27ai_path8waypoint

- Address: `0x00110328`
- Size: `0x98` (152 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.1316 | 0.0 | `candidate.cpp` |
| 2 | different | 20.3947 | 0.0 | `candidate.cpp` |
| 3 | different | 23.8636 | 0.0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five released-template and explicit-ABI list resize variants reproduced traversal and erase/insert semantics, but iterator stack materialization and call scheduling did not match.
