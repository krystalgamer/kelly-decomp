# _$_9NamesMenu

- Address: `0x0019E680`
- Size: `0x110` (272 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.cpp:1469-1473; kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.h:192-229; src/KS/SRC/ks/FEMenu_shared.h:1-230; src/KS/SRC/ks/FEPanel_shared.h:142-169. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released NamesMenu destructor failed the isolated compile because duplicate released PanelFile declarations collided; the sole attempt scored 0%.
