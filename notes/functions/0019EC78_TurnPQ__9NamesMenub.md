# TurnPQ__9NamesMenub

- Address: `0x0019EC78`
- Size: `0xF8` (248 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.8871 | 82.2581 | `candidate.cpp` |

### Attempt 1 notes

Exact released `NamesMenu::TurnPQ` body with the authentic `FEMultiMenu`, names-menu, and 0x194 `PanelQuad` layouts. Every panel toggle and object offset reproduces, but EE GCC tail-called `TurnPQLines`, producing 244 bytes instead of the target's normal call and 248-byte epilogue.

## Outcome

Exact released names-menu panel toggle differed only by final helper tail-call formation.
