# remove__t4list2ZP7elementZt12my_allocator1ZP7elementRCP7element

- Address: `0x0013DFA0`
- Size: `0x80` (128 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.3125 | 0.0 | `candidate.cpp` |
| 2 | different | 27.381 | 7.1429 | `candidate.cpp` |
| 3 | different | 22.7273 | 0.0 | `candidate.cpp` |
| 4 | different | 29.8611 | 5.5556 | `candidate.cpp` |
| 5 | different | 43.4211 | 15.7895 | `candidate.cpp` |

## Outcome

Deferred the released element-list removal after five source-level attempts; the allocator unlink logic was reconstructed, but the old STL iterator temporary stack layout could not be reproduced.
