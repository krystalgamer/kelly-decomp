# SetTime__16SplitClockWidgetif

- Address: `0x0016C7C8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitclock.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitclock.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.9677 | 35.4839 | `candidate.cpp` |
| 2 | different | 83.871 | 83.871 | `candidate.cpp` |
| 3 | different | 31.0606 | 12.1212 | `candidate.cpp` |
| 4 | different | 23.4848 | 6.0606 | `candidate.cpp` |
| 5 | different | 32.2222 | 26.6667 | `candidate.cpp` |

## Outcome

Deferred SplitClockWidget::SetTime after five source-level attempts; the released change guard, clock fields, formatted string call, and virtual text update reproduced, but the target aggregate-call argument and store scheduling did not.
