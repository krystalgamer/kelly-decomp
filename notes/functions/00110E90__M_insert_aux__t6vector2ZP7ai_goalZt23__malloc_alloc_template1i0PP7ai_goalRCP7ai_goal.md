# _M_insert_aux__t6vector2ZP7ai_goalZt23__malloc_alloc_template1i0PP7ai_goalRCP7ai_goal

- Address: `0x00110E90`
- Size: `0x17C` (380 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.8421 | 10.5263 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `_M_insert_aux` vector template body and declarations for the `ai_goal*` specialization. Result `different`, score 31.8421; no retry or variant was made. Citations: `src/g++-2/stl_vector_shared.h:1-97`, `src/g++-2/my_allocator_shared.h:1-8`.

## Outcome

Exact released-source first pass for AI goal vector insertion did not match.
