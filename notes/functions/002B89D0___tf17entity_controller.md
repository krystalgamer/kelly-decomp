# __tf17entity_controller

- Address: `0x002B89D0`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `controller.h`
- Reference source: `KS/SRC/controller.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 15.8333 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred entity controller RTTI generation after five source-level attempts; the released controller inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
