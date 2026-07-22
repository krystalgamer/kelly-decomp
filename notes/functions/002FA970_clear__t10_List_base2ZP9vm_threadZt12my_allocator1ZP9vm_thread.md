# clear__t10_List_base2ZP9vm_threadZt12my_allocator1ZP9vm_thread

- Address: `0x002FA970`
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

Inspected script_object thread_list and reused the shared GCC 2 list allocator context. All five source-only clear forms produced the same known register-allocation or branch-scheduling differences from the target.
