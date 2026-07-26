# sort_heap__H2ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01X11_v

- Address: `0x003AAEE0`
- Size: `0xCC` (204 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.0784 | 3.9216 | `candidate.cpp` |
| 2 | different | 29.2453 | 11.3208 | `candidate.cpp` |
| 3 | different | 34.3137 | 3.9216 | `candidate.cpp` |
| 4 | different | 34.3137 | 3.9216 | `candidate.cpp` |
| 5 | different | 34.3137 | 3.9216 | `candidate.cpp` |

## Outcome

The released heap-sort loop was recovered, but pair passing, aggregate copies, and callee-save allocation remained irreducible after five source-level attempts.
