# __tf10KSMainMenu

- Address: `0x00270DE0`
- Size: `0x78` (120 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ksdbmenu.h`
- Reference source: `KS/SRC/ks/ksdbmenu.h`
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

Deferred KSMainMenu RTTI generation after five source-level attempts; the released Menu inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
