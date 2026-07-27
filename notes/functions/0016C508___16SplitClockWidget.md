# __16SplitClockWidget

- Address: `0x0016C508`
- Size: `0x100` (256 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitclock.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitclock.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 70.3125 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue was clean `pending` with zero attempts; no pre-existing address scratch was present.
- Used the released `SplitClockWidget::SplitClockWidget` body verbatim from `igo_widget_splitclock.cpp:7-17`.
- Used only authentic widget/TextString, stringx, color32, allocation macro, vtable, and layout declarations, following the adjacent released `SplitScoreWidget` constructor prior art.
- Result: **different** — byte score 75.0000%, instruction score 70.3125%; candidate and target are both 256 bytes. No second attempt was made.

## Outcome

Exact released SplitClockWidget constructor source differed from the target; preserved attempt 1 for the later Sol pass.
