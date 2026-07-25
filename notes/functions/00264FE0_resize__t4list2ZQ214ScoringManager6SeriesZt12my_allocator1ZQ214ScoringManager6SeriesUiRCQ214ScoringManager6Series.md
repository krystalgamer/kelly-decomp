# resize__t4list2ZQ214ScoringManager6SeriesZt12my_allocator1ZQ214ScoringManager6SeriesUiRCQ214ScoringManager6Series

- Address: `0x00264FE0`
- Size: `0x98` (152 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.3947 | 0.0 | `candidate.cpp` |
| 2 | different | 23.8636 | 0.0 | `candidate.cpp` |
| 3 | different | 20.3947 | 0.0 | `candidate.cpp` |
| 4 | different | 29.6053 | 5.2632 | `candidate.cpp` |
| 5 | different | 21.0526 | 0.0 | `candidate.cpp` |

## Outcome

Five released-template and explicit-ABI list resize variants reproduced traversal and erase/insert semantics, but GCC2 iterator stack materialization and call scheduling did not match.
