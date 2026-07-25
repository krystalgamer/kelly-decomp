# __tf18ControllerFrontEnd

- Address: `0x001D8418`
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

The released tree lacks the built-only `ControllerFrontEnd` declaration, so the exact generated RTTI data was used to establish its single public `FEGraphicalMenu` base; that base's released `FEMenu`/`FrontEnd` inheritance was reused. Five source-level RTTI forms preserved all linked objects and base counts but could not reproduce the recurring common-section register schedule, so shared edits were reverted.

## Outcome

Deferred built-only ControllerFrontEnd RTTI after five source-level attempts could not reproduce its compiler register schedule.
