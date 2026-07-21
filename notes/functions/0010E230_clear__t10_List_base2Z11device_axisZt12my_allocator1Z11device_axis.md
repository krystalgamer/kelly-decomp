# clear__t10_List_base2Z11device_axisZt12my_allocator1Z11device_axis

- Address: `0x0010E230`
- Size: `0x48` (72 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 40.2778 | 11.1111 | `candidate.cpp` |
| 3 | different | 40.2778 | 11.1111 | `candidate.cpp` |
| 4 | different | 55.5556 | 27.7778 | `candidate.cpp` |
| 5 | different | 19.7368 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Inspected the originating translation unit context and GCC 2 list clear pattern; first candidate used equivalent node traversal and allocator free-list behavior but lacked the template mangling.

### Attempt 2 notes

Restored the exact _List_base and my_allocator template spelling; emitted the right symbol and semantics but different register scheduling.

### Attempt 3 notes

Moved deallocation into the allocator helper pattern used by the SDK; code generation was unchanged.

### Attempt 4 notes

Used target-informed register hints while preserving the same C++ behavior; branch-likely selection and loop scheduling still differed.

### Attempt 5 notes

Recreated the classic GCC 2 clear body with separate temporary/current nodes and an inline put_node helper; it introduced another scheduling form rather than the target.

## Outcome

Five source-only reconstructions of the generated SDK list clear could not reproduce the target scheduler and branch form; deferred.
