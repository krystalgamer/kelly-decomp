# HighlightLeft__12ReplayWidget

- Address: `0x0016BD50`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_replay.cpp`
- Reference source: `KS/SRC/ks/igo_widget_replay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeling the preceding fields as padding places `vcrButtonHL` at offset 0x0c; the released decrement-and-clamp body is otherwise direct.

## Outcome

The released `ReplayWidget::HighlightLeft` decrement-and-clamp implementation matched exactly on the first attempt.
