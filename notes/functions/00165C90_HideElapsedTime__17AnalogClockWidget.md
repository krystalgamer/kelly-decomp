# HideElapsedTime__17AnalogClockWidget

- Address: `0x00165C90`
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

Hiding elapsed time clears the float at offset `0x10`. GCC folds `0.0f` to a
zero word store, matching the target.

## Outcome

Hiding elapsed time clears the float at offset 0x10. GCC folds 0.0f to the target zero-word store, matching on the first attempt while preserving the full ROM checksum.
