# _$_16SplitClockWidget

- Address: `0x0016C608`
- Size: `0x64` (100 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitclock.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitclock.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released destructor, IGOWidget inheritance, timeText offset, derived vtable, and virtual delete path. The established non-tail destructor pattern matched on attempt 1.

## Outcome

Matched split clock widget destructor
