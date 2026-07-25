# __tf13LegalFrontEnd

- Address: `0x001D82A8`
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

Inspected the exact public inheritance (`LegalFrontEnd : FEGraphicalMenu`) and reconstructed the complete generated RTTI graph for the `FEGraphicalMenu : FEMenu, FrontEnd` base. Five source-level variants preserved all linked names, type objects, and base counts but could not reproduce the same common-section register allocation and extra materialization instruction seen in the adjacent generated RTTI functions; shared edits were reverted.

## Outcome

Deferred LegalFrontEnd generated RTTI after five source-level attempts could not reproduce its compiler register schedule.
