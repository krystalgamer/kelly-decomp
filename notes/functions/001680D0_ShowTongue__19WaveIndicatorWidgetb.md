# ShowTongue__19WaveIndicatorWidgetb

- Address: `0x001680D0`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_waveindicator.cpp`
- Reference source: `KS/SRC/ks/igo_widget_waveindicator.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released fade selection and tongue overlay-state initialization use the
shared `WaveIndicatorWidget` declaration.

## Outcome

The local widget layout was removed; the tongue display remains exact.
