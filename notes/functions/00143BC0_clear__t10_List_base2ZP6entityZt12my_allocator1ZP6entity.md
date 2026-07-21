# clear__t10_List_base2ZP6entityZt12my_allocator1ZP6entity

- Address: `0x00143BC0`
- Size: `0x48` (72 bytes)
- Object: `game/files_entity`
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

Inspected the originating entity list typedef and GCC 2 stl_list clear pattern.

### Attempt 2 notes

Inlined equivalent allocator free-list behavior.

### Attempt 3 notes

Tested a guarded do-loop branch form.

### Attempt 4 notes

Restored allocator-object deallocation spelling.

### Attempt 5 notes

Separated sentinel and free-list temporaries to constrain alias analysis.

## Outcome

Five source-only SDK template reconstructions could not reproduce the target register schedule; deferred.
