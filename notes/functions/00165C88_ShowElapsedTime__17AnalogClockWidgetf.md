# ShowElapsedTime__17AnalogClockWidgetf

- Address: `0x00165C88`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_analogclock.cpp`
- Reference source: `KS/SRC/ks/igo_widget_analogclock.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The elapsed-time interval is stored at `AnalogClockWidget` offset `0x10`.
Assigning the float matched the target store.

## Outcome

The elapsed-time interval is stored at AnalogClockWidget offset 0x10. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
