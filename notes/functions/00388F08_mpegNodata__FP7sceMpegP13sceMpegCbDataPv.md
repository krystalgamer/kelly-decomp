# mpegNodata__FP7sceMpegP13sceMpegCbDataPv

- Address: `0x00388F08`
- Size: `0x2C` (44 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-platform-final.cpp` |

### Attempt 1 notes

The shared NVL declarations rotate the ready queue, restart DMA on the global
video decoder buffer, and report success.

## Outcome

The released MPEG no-data callback matched exactly on the first attempt.
