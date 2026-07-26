# __unguarded_partition__H3ZPt4pair2ZP11nglListNodeZUiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X01X11X21_X01

- Address: `0x003AB908`
- Size: `0xD4` (212 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algo.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.0189 | 35.8491 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SGI unguarded-partition loop passed the pivot by value, forcing an extra stack copy and 32-byte frame.

### Attempt 2 notes

Recovered the template's const-reference pivot type. The exact comparator, scans, swap, and loop then matched byte-exactly.

## Outcome

Matched the exact released SGI unguarded-partition scan, comparator, pair swap, and loop after recovering the pivot as a const-reference template parameter.
