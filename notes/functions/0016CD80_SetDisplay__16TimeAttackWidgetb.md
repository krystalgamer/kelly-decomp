# SetDisplay__16TimeAttackWidgetb

- Address: `0x0016CD80`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_timeattack.cpp`
- Reference source: `KS/SRC/ks/igo_widget_timeattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override forwards directly to `IGOWidget::SetDisplay`; a barrier prevents tail-call formation.

## Outcome

The released `TimeAttackWidget::SetDisplay` forwarding wrapper matched exactly on the first attempt.
