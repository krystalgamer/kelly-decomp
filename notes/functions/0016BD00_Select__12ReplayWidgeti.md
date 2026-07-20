# Select__12ReplayWidgeti

- Address: `0x0016BD00`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_replay.cpp`
- Reference source: `KS/SRC/ks/igo_widget_replay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout preserves the selected VCR button at offset eight and clamps it to the released range 0..4.

## Outcome

The released `ReplayWidget::Select` implementation matched exactly.
