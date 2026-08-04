# videoDecBeginPut__FP8VideoDecPPUcPiT1T2

- Address: `0x00388BA8`
- Size: `0x1C` (28 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.5714 | 0.0 | `size28-platform-probes-1.cpp` |
| 2 | different | 3.5714 | 0.0 | `size28-platform-probes-2.cpp` |
| 3 | different | 3.5714 | 0.0 | `size28-platform-probes-3.cpp` |

## Outcome

All three direct forms adjust to `VideoDec::vibuf` and tail-call `viBufBeginPut`. The target retains a 28-byte frame, so the local wrapper was deferred.
