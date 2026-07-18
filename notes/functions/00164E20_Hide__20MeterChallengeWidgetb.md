# Hide__20MeterChallengeWidgetb

- Address: `0x00164E20`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_meterchallenge.cpp`
- Reference source: `KS/SRC/ks/igo_widget_meterchallenge.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released conditional sets `fadeDir` at `0x18` to `-1` only when fading out.

## Outcome

The released `MeterChallengeWidget::Hide` branch matched exactly on the first attempt.
