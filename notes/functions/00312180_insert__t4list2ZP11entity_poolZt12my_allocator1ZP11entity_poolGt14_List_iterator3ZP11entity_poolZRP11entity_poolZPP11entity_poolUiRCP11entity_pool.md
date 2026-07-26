# insert__t4list2ZP11entity_poolZt12my_allocator1ZP11entity_poolGt14_List_iterator3ZP11entity_poolZRP11entity_poolZPP11entity_poolUiRCP11entity_pool

- Address: `0x00312180`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.5 | 6.25 | `candidate.cpp` |
| 2 | different | 37.5 | 6.25 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 37.5 | 6.25 | `candidate.cpp` |
| 5 | different | 37.5 | 6.25 | `candidate.cpp` |

### Attempt 1 notes

The released count-insert implementation used different allocator and node
link registers from the available compiler.

## Outcome

Five GNU 2 entity-pool count-insert forms retained divergent allocator and node-link scheduling.
