# raise_signal__C9signallerUi

- Address: `0x0035FC18`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 10.5263 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Used immutable signals.h:271-280 with shared signaller/signal-list declarations. Attempt 1 tail-called signal::raise; attempt 2 used a normalized return barrier and matched byte-for-byte.
