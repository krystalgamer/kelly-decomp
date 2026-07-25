# SetArrowPos__14FanMeterWidgetf

- Address: `0x00169678`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_fanmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_fanmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.0278 | 27.7778 | `candidate.cpp` |
| 2 | different | 34.0278 | 27.7778 | `candidate.cpp` |
| 3 | different | 34.0278 | 27.7778 | `candidate.cpp` |
| 4 | different | 75.6944 | 66.6667 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five source-level clamp variants could not reproduce the target FPU hazard nops in the upper-bound comparison; the best complete-size candidate reached 75.69% byte score.
