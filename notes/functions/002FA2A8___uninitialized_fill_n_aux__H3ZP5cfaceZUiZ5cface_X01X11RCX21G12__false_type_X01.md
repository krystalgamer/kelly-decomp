# __uninitialized_fill_n_aux__H3ZP5cfaceZUiZ5cface_X01X11RCX21G12__false_type_X01

- Address: `0x002FA2A8`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 19.0 | 4.0 | `candidate.cpp` |
| 3 | different | 23.6111 | 8.3333 | `candidate.cpp` |
| 4 | different | 15.0 | 0.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Released cface fill construction uses a compiler-specific 128-bit memcpy expansion and counter update; five candidates, including exact released memcpy semantics, did not match.
