# viBufBeginPut__FP5ViBufPPUcPiT1T2

- Address: `0x0038A0D8`
- Size: `0xF4` (244 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.5246 | 83.6066 | `candidate.cpp` |

### Attempt 1 notes

Exact released `viBufBeginPut` body with the authentic `ViBuf`, DMA environment, buffer macros, and semaphore declarations. It matches the target through all buffer arithmetic and branches, but EE GCC tail-called `SignalSema`, producing 240 bytes instead of the target's normal call and 244-byte epilogue.

## Outcome

Exact released video-buffer put code differed only by semaphore tail-call formation.
