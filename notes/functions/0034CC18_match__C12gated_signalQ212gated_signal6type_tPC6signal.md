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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The minimal released layout preserves the 16-bit gate type at 0x1c and `input_a`/`input_b` at 0x20/0x24; the original boolean expression reproduces both likely pointer comparisons.

## Outcome

The released `gated_signal::match` predicate matched exactly on the first attempt.
