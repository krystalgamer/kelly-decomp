# __tf11OptionsMenu

- Address: `0x001D81F0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.h`
- Reference source: `KS/SRC/ks/MainFrontEnd.h`
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

Inspected the exact inheritance (`OptionsMenu : FEGraphicalMenu`, with the latter's public `FEMenu` and `FrontEnd` bases) and reconstructed the established generated RTTI graph, addresses, names, and base counts. As with the adjacent FEMultiMenu RTTI helper, five source-level forms could not reproduce the target common-section register allocation and extra materialization instruction; shared changes were reverted.

## Outcome

Deferred OptionsMenu generated RTTI after five source-level attempts could not reproduce its compiler register schedule.
