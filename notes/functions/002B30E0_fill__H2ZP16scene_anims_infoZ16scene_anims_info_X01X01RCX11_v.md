# fill__H2ZP16scene_anims_infoZ16scene_anims_info_X01X01RCX11_v

- Address: `0x002B30E0`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.625 | 0.0 | `candidate.cpp` |
| 2 | different | 59.375 | 32.5 | `candidate.cpp` |
| 3 | different | 41.2791 | 11.6279 | `candidate.cpp` |
| 4 | different | 59.375 | 32.5 | `candidate.cpp` |
| 5 | different | 60.9756 | 26.8293 | `candidate.cpp` |

## Outcome

Five released-template and ABI-bound variants reproduced scene record assignment, but GCC2 aggregate register scheduling did not match.
