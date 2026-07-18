# Hide__19WaveIndicatorWidgetb

- Address: `0x00168180`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_waveindicator.cpp`
- Reference source: `KS/SRC/ks/igo_widget_waveindicator.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released branch sets `fadeDir` at `0x98` to `-1` or clears `state` at `0x9C`.

## Outcome

The released `WaveIndicatorWidget::Hide` branch matched exactly on the first attempt.
