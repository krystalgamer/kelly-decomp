# SpeedSlow__8KSReplay

- Address: `0x0023CA38`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target preserves deferred speed changes: leaving fast-forward switches immediately, otherwise slow motion is prepared for the next replay frame.

## Outcome

The recovered `KSReplay::SpeedSlow` state transition matched exactly.
