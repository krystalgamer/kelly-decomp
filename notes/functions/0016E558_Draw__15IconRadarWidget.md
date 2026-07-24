# Draw__15IconRadarWidget

- Address: `0x0016E558`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_iconradar.cpp`
- Reference source: `KS/SRC/ks/igo_widget_iconradar.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.5161 | 70.3704 | `candidate.cpp` |
| 2 | different | 69.3548 | 61.5385 | `candidate.cpp` |
| 3 | different | 70.9677 | 73.0769 | `candidate.cpp` |
| 4 | different | 89.5161 | 70.3704 | `candidate.cpp` |
| 5 | different | 89.5161 | 70.3704 | `candidate.cpp` |

## Outcome

Deferred IconRadarWidget::Draw after five source-level attempts; the released base draw, display guard, ellipse virtual draw, icon count, and empty loop reproduced, but the target preserved empty-loop decrement and branch-likely schedule did not.
