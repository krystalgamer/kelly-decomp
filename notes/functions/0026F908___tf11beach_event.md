# __tf11beach_event

- Address: `0x0026F908`
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
| 3 | different | 16.6667 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred beach_event RTTI generation after five source-level attempts; the released beach_object inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
