# mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv

- Address: `0x00388F60`
- Size: `0x24` (36 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size36-nvl.cpp` |

### Attempt 1 notes

The shared NVL callback ignores its MPEG arguments, restarts DMA on the linker-bound video buffer, and returns success naturally.

## Outcome

The released `mpegRestartDMA` callback matched exactly.
