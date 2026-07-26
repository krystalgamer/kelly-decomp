# __insertion_sort__H2ZPt4pair2ZP11nglListNodeZUiZ16nglOpaqueCompare_X01X01X11_v

- Address: `0x003AB2F8`
- Size: `0xE4` (228 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algo.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.2982 | 17.5439 | `candidate-round1.cpp` |
| 2 | different | 57.2034 | 32.2034 | `candidate-round2.cpp` |
| 3 | different | 52.459 | 37.7049 | `candidate-round3.cpp` |
| 4 | different | 58.1897 | 39.6552 | `candidate-round4.cpp` |
| 5 | different | 58.1897 | 39.6552 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-level attempts. The released opaque-list insertion sort, comparator, copy-backward path, unguarded call, and exact frame are recovered, but GCC leaves one nop where the target schedules the second pair store in the loop delay slot.
