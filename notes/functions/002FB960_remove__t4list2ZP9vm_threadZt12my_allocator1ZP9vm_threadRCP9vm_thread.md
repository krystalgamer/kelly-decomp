# remove__t4list2ZP9vm_threadZt12my_allocator1ZP9vm_threadRCP9vm_thread

- Address: `0x002FB960`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.3125 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 23.8372 | 0.0 | `candidate.cpp` |
| 4 | different | 29.8611 | 5.5556 | `candidate.cpp` |
| 5 | different | 43.4211 | 15.7895 | `candidate.cpp` |

## Outcome

Deferred the released VM-thread list removal after five source-level attempts; the allocator unlink logic was reconstructed, but the old STL iterator temporary stack layout could not be reproduced.
