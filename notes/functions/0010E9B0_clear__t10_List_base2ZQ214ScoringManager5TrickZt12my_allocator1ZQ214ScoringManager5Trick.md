# clear__t10_List_base2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5Trick

- Address: `0x0010E9B0`
- Size: `0x48` (72 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.7368 | 0.0 | `candidate.cpp` |
| 2 | different | 40.2778 | 11.1111 | `candidate.cpp` |
| 3 | different | 40.2778 | 11.1111 | `candidate.cpp` |
| 4 | different | 40.2778 | 11.1111 | `candidate.cpp` |
| 5 | different | 47.2222 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Inspected the files_ai instantiation context and GCC 2 stl_list clear pattern; reproduced the nested ScoringManager::Trick and allocator types with the classic temporary/current traversal.

### Attempt 2 notes

Inlined the equivalent allocator free-list update directly in the loop.

### Attempt 3 notes

Used a guarded do-loop to test the target branch form.

### Attempt 4 notes

Restored allocator-object deallocation spelling around the same free-list behavior.

### Attempt 5 notes

Separated sentinel, next, and old free-list values to constrain alias analysis; scheduling still differed.

## Outcome

Five source-only SDK template reconstructions could not reproduce the target register schedule; deferred.
