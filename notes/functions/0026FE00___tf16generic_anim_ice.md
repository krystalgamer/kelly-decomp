# __tf16generic_anim_ice

- Address: `0x0026FE00`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 17.5 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 24.1667 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred generic_anim_ice RTTI generation after five source-level attempts; the released generic_anim inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
