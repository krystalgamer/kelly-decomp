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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override refreshes the base signal and clears its per-frame gate flags at offset 0x1e.

## Outcome

The released `gated_signal::refresh` implementation matched exactly.
