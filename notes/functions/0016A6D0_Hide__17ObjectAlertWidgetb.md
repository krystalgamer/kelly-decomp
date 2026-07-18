# Hide__17ObjectAlertWidgetb

- Address: `0x0016A6D0`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_objectalert.cpp`
- Reference source: `KS/SRC/ks/igo_widget_objectalert.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets `fadeDir` at `0x14` to `-1` and clears `fade` at `0x10` when not fading out.

## Outcome

The released `ObjectAlertWidget::Hide` branch matched exactly on the first attempt.
