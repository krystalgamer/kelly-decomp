# __tf13TitleFrontEnd

- Address: `0x001D8360`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.h`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.587 | 2.1739 | `candidate.cpp` |
| 2 | different | 13.587 | 2.1739 | `candidate.cpp` |
| 3 | different | 11.9565 | 4.3478 | `candidate.cpp` |
| 4 | different | 15.9574 | 4.2553 | `candidate.cpp` |
| 5 | different | 16.1458 | 6.25 | `candidate.cpp` |

### Attempt 5 notes

Inspected the exact public inheritance (`TitleFrontEnd : FEGraphicalMenu`) and reconstructed the complete generated RTTI graph for its two-base graphical-menu parent. Five source-level variants preserved every linked type object, name, descriptor, and base count but repeated the adjacent RTTI helpers' unreproducible common-section register allocation; shared declarations were reverted.

## Outcome

Deferred TitleFrontEnd generated RTTI after five source-level attempts could not reproduce its compiler register schedule.
