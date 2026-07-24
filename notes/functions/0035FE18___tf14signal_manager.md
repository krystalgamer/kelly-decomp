# __tf14signal_manager

- Address: `0x0035FE18`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
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

Deferred signal_manager RTTI generation after five source-level attempts; the released singleton inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
