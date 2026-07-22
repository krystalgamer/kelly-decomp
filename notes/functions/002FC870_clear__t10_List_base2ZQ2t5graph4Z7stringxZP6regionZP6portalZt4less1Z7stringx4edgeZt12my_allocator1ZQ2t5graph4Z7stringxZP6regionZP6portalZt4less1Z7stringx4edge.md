# clear__t10_List_base2ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edgeZt12my_allocator1ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4edge

- Address: `0x002FC870`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 2 | different | 47.2222 | 5.5556 | `candidate.cpp` |
| 3 | different | 47.2222 | 22.2222 | `candidate.cpp` |
| 4 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 5 | different | 37.5 | 0.0 | `candidate.cpp` |

## Outcome

Inspected region_graph and graph::edge in the released graph headers and reused the shared GCC 2 list allocator model. Five source-only template forms failed on the same register-allocation and delay-slot schedule as adjacent list clears.
