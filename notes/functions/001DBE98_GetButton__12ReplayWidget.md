# GetButton__12ReplayWidget

- Address: `0x001DBE98`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_replay.h`
- Reference source: `KS/SRC/ks/igo_widget_replay.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline getter returns `vcrButton` from offset `0x8`.

## Outcome

The released `ReplayWidget::GetButton` accessor matched exactly on the first attempt.
