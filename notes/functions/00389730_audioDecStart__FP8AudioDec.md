# audioDecStart__FP8AudioDec

- Address: `0x00389730`
- Size: `0x1C` (28 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-platform-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-platform-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-platform-probes-3.cpp` |

## Outcome

All three direct forms tail-call `audioDecResume` in eight bytes. The target retains a 28-byte frame, so the local wrapper was deferred.
