# raise_input__6signalP6signalP9signaller

- Address: `0x0034C510`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-final1-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-final1-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-final1-probes-3.cpp` |

## Outcome

All three shared-declaration forms ignore the unused parameters and tail-call
`signal::raise`. The target retains a 28-byte frame, so the wrapper was deferred.
