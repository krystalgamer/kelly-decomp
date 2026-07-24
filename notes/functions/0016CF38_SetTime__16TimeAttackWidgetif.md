# SetTime__16TimeAttackWidgetif

- Address: `0x0016CF38`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_timeattack.cpp`
- Reference source: `KS/SRC/ks/igo_widget_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.3548 | 29.0323 | `candidate.cpp` |
| 2 | different | 83.871 | 83.871 | `candidate.cpp` |
| 3 | different | 31.8182 | 12.1212 | `candidate.cpp` |
| 4 | different | 24.2424 | 6.0606 | `candidate.cpp` |
| 5 | different | 32.2222 | 26.6667 | `candidate.cpp` |

## Outcome

Deferred TimeAttackWidget::SetTime after five source-level attempts; the released change guard, clock fields, formatted string call, and virtual text update reproduced, but the target aggregate-call argument and store scheduling did not.
