# _S_oom_malloc__t23__malloc_alloc_template1i0Ui

- Address: `0x0010D910`
- Size: `0xA4` (164 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_alloc.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6829 | 0.0 | `candidate.cpp` |
| 2 | different | 72.561 | 58.5366 | `candidate.cpp` |
| 3 | different | 17.2222 | 2.2222 | `candidate.cpp` |
| 4 | different | 17.7778 | 2.2222 | `candidate.cpp` |
| 5 | different | 21.1111 | 4.4444 | `candidate.cpp` |

## Outcome

Five source-faithful STL OOM allocator variants reproduced handler retry semantics but not original GCC2 whole-TU register scheduling.
