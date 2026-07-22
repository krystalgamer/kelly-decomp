# clear__t10_List_base2ZP11entity_poolZt12my_allocator1ZP11entity_pool

- Address: `0x003115C0`
- Size: `0x48` (72 bytes)
- Object: `game/files_misfits`
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

Inspected entity_pool_set::aux_t in entity_maker.h and reused the shared GCC 2 list allocator context. Five source-only clear implementations could not reproduce the target register and delay-slot schedule.
