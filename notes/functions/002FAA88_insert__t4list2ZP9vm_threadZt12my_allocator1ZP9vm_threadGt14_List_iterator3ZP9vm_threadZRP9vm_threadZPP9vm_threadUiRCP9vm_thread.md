# insert__t4list2ZP9vm_threadZt12my_allocator1ZP9vm_threadGt14_List_iterator3ZP9vm_threadZRP9vm_threadZPP9vm_threadUiRCP9vm_thread

- Address: `0x002FAA88`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 6.25 | `candidate.cpp` |
| 2 | different | 37.5 | 6.25 | `candidate.cpp` |
| 3 | different | 37.5 | 6.25 | `candidate.cpp` |
| 4 | different | 37.5 | 6.25 | `candidate.cpp` |
| 5 | different | 37.5 | 6.25 | `candidate.cpp` |

### Attempt 1 notes

The GNU 2 count-insert implementation emitted different allocation and link
registers and a shorter body.

### Attempt 5 notes

Context and barrier variants did not recover the target template ABI.

## Outcome

The GNU 2 VM-thread count insert retained divergent allocation and link registers across five source-level contexts.
