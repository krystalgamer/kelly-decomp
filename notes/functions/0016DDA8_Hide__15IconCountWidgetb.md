# Hide__15IconCountWidgetb

- Address: `0x0016DDA8`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_iconcount.cpp`
- Reference source: `KS/SRC/ks/igo_widget_iconcount.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released conditional sets `fadeDir` at `0x1C` to `-1` only when fading out.

## Outcome

The released `IconCountWidget::Hide` branch matched exactly on the first attempt.
