# __push_heap__H4ZPt4pair2ZP11nglListNodeZUiZiZt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X11X11X21X31_v

- Address: `0x003AACC0`
- Size: `0x9C` (156 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.1042 | 2.0833 | `candidate.cpp` |
| 2 | different | 64.375 | 47.5 | `candidate.cpp` |
| 3 | different | 94.8718 | 82.0513 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 37.8205 | 25.641 | `candidate.cpp` |

## Outcome

Five released-template and ABI-bound heap variants reproduced parent promotion and final aggregate placement; GCC2 comparator register scheduling did not match.
