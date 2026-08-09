# match__C12gated_signalQ212gated_signal6type_tPC6signal

- Address: `0x0034CC18`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-string-stash-core.cpp` |

### Attempt 1 notes

The shared gated-signal declaration preserves the 16-bit type and input
pointers used by the released boolean expression.

## Outcome

The local signal layout was removed.
