# _$_17generic_anim_misc

- Address: `0x0026FC40`
- Size: `0xD0` (208 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.h`
- Reference source: `KS/SRC/ks/floatobj.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 12.9808 | 3.8462 | `candidate.cpp` |
| 3 | different | 12.9808 | 3.8462 | `candidate.cpp` |
| 4 | different | 12.9808 | 3.8462 | `candidate.cpp` |
| 5 | different | 12.9808 | 3.8462 | `candidate.cpp` |

## Outcome

The released destructor body was recovered, but array-cookie teardown, base vtable transition, and deleting epilogue remained irreducible after five source-level attempts.
