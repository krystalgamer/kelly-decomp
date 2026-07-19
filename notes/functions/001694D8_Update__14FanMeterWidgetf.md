# Update__14FanMeterWidgetf

- Address: `0x001694D8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_fanmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_fanmeter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override delegates to `IGOWidget::Update`; a barrier preserves the call wrapper.

## Outcome

The released `FanMeterWidget::Update` wrapper matched exactly on the first attempt.
