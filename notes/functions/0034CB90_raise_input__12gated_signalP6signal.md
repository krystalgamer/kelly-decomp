# raise_input__12gated_signalP6signal

- Address: `0x0034CB90`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.7353 | 70.5882 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released gated-signal input handling matched after binding raise and refresh calls to the signal base symbols and blocking the final tail call.

## Outcome

The released gated-signal input handler matched exactly on the second attempt.
