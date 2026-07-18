# SpeedFast__8KSReplay

- Address: `0x0023CA78`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears `slomo` at `0x1C` and sets `fastforward` at `0x20`.

## Outcome

The released `KSReplay::SpeedFast` flag changes matched exactly on the first attempt.
