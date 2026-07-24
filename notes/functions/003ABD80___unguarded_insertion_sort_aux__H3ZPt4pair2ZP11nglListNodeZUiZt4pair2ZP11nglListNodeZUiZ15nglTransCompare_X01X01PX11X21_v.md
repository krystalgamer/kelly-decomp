# __unguarded_insertion_sort_aux__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01PX11X21_v

- Address: `0x003ABD80`
- Size: `0x60` (96 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algo.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released translucent pair comparator and reconstructed the generated STL unguarded insertion loop with the exact linear-insert helper. It matched on attempt 1.

## Outcome

Matched translucent insertion sort helper
