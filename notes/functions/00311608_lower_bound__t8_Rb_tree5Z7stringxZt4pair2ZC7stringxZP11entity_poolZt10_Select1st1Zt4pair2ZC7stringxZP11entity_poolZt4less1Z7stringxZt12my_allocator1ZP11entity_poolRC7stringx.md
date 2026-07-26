# lower_bound__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolRC7stringx

- Address: `0x00311608`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.5918 | 10.2041 | `candidate.cpp` |
| 2 | different | 29.5918 | 10.2041 | `candidate.cpp` |
| 3 | different | 33.1633 | 8.1633 | `candidate.cpp` |
| 4 | different | 30.6122 | 12.2449 | `candidate.cpp` |
| 5 | different | 30.6122 | 12.2449 | `candidate.cpp` |

### Attempt 3 notes

The best source-shaped GNU 2 traversal remained divergent in its inlined
string comparator, iterator return ABI, and loop registers.

## Outcome

Five source-level GNU 2 lower-bound forms could not reproduce the target comparator and iterator ABI schedule.
