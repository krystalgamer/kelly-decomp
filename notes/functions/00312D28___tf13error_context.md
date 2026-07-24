# __tf13error_context

- Address: `0x00312D28`
- Size: `0x78` (120 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/errorcontext.h`
- Reference source: `KS/SRC/errorcontext.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1667 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 19.1667 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred error_context RTTI generation after five source-level attempts; the released singleton inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
