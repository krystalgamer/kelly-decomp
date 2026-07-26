# __uninitialized_copy_aux__H2ZP10debug_textZP10debug_text_X01X01X11G12__false_type_X11

- Address: `0x002F3768`
- Size: `0xC4` (196 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.6939 | 32.6531 | `candidate.cpp` |
| 2 | different | 26.4151 | 3.7736 | `candidate.cpp` |
| 3 | different | 59.6939 | 32.6531 | `candidate.cpp` |
| 4 | different | 59.6939 | 32.6531 | `candidate.cpp` |
| 5 | different | 57.1429 | 30.6122 | `candidate.cpp` |

## Outcome

Five attempts recovered the debug-text copy constructor, but member register allocation and default initialization scheduling remained different.
