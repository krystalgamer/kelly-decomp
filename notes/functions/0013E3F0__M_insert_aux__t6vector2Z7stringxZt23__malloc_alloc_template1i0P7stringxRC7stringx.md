# _M_insert_aux__t6vector2Z7stringxZt23__malloc_alloc_template1i0P7stringxRC7stringx

- Address: `0x0013E3F0`
- Size: `0x1E0` (480 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.75 | 1.6667 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave89 A4
Target: 0x0013E3F0 _M_insert_aux__t6vector2Z7stringxZt23__malloc_alloc_template1i0P7stringxRC7stringx (480/0x1E0), game/files_entity
Reference: GCC 2.95.2 stl_vector.h
Attempts before: 0
Attempt 1: faithful template body with minimal self-contained declarations and no headers
Result: different; byte score 18.75; instruction score 1.6667; candidate size 444; target size 480
No alternatives, retries, attempts 2-5, algorithm changes, assembly, annotations, integration, finalization, build, or tracked-file changes.

## Outcome

The exact released string-vector insertion body differed at 18.7500% byte score; no source variant was attempted.
