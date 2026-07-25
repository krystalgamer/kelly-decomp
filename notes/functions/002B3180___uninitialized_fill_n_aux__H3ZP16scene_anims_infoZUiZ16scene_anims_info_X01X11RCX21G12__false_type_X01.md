# __uninitialized_fill_n_aux__H3ZP16scene_anims_infoZUiZ16scene_anims_info_X01X11RCX21G12__false_type_X01

- Address: `0x002B3180`
- Size: `0xAC` (172 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.8372 | 0.0 | `candidate.cpp` |
| 2 | different | 98.2558 | 95.3488 | `candidate.cpp` |
| 3 | different | 30.2326 | 0.0 | `candidate.cpp` |
| 4 | different | 98.2558 | 95.3488 | `candidate.cpp` |
| 5 | different | 25.0 | 4.2553 | `candidate.cpp` |

## Outcome

Five exact scene-info fill variants reproduced the full copy loop; the best differed only in two preheader address-setup instructions.
