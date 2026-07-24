# __tf10GridWidget

- Address: `0x001DC300`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_grid.h`
- Reference source: `KS/SRC/ks/igo_widget_grid.h`
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

Deferred GridWidget RTTI generation after five source-level attempts; the released IGOWidget inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
