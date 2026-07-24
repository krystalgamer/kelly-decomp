# __push_heap__H4ZP16ai_polypath_nodeZiZ16ai_polypath_nodeZt7greater1Z16ai_polypath_node_X01X11X11X21X31_v

- Address: `0x00110020`
- Size: `0x90` (144 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.7143 | 0.0 | `candidate.cpp` |
| 2 | different | 9.375 | 0.0 | `candidate.cpp` |
| 3 | different | 8.125 | 0.0 | `candidate.cpp` |
| 4 | different | 95.1389 | 83.3333 | `candidate.cpp` |
| 5 | different | 93.2432 | 91.8919 | `candidate.cpp` |

## Outcome

Five source-level heap candidates reproduced the generated comparator loop; the best matched 30/36 instructions and 95.14% bytes, differing only in the final value-copy register allocation.
