# __uninitialized_copy_aux__H2ZPC4vertZP4vert_X01X01X11G12__false_type_X11

- Address: `0x002F97A0`
- Size: `0xB0` (176 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.3191 | 36.1702 | `candidate.cpp` |
| 2 | different | 55.3191 | 36.1702 | `candidate.cpp` |
| 3 | different | 26.6304 | 4.3478 | `candidate.cpp` |
| 4 | different | 18.1818 | 0.0 | `candidate.cpp` |
| 5 | different | 24.4565 | 4.3478 | `candidate.cpp` |

## Outcome

Five released vertex-copy variants could not reproduce the original compiler-generated array loop scheduling and hazard nops.
