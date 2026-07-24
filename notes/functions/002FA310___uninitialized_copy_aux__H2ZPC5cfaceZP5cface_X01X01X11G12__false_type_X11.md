# __uninitialized_copy_aux__H2ZPC5cfaceZP5cface_X01X01X11G12__false_type_X11

- Address: `0x002FA310`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 31.0 | 4.0 | `candidate.cpp` |
| 3 | different | 25.6944 | 8.3333 | `candidate.cpp` |
| 4 | different | 17.2414 | 0.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Released cface copy construction uses a compiler-specific 128-bit memcpy expansion and counter update; five candidates, including exact released memcpy semantics, did not match.
