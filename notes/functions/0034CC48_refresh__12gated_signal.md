# refresh__12gated_signal

- Address: `0x0034CC48`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-utilities.cpp` |

### Attempt 1 notes

The shared released signal hierarchy naturally refreshes the base and clears
the per-frame gate flags.

## Outcome

The released `gated_signal::refresh` implementation matched exactly.
