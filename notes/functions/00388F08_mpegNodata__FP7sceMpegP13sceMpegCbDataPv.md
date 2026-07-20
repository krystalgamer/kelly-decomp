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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released callback rotates the ready queue at priority 1, restarts DMA on the global video decoder buffer, and reports success.

## Outcome

The released MPEG no-data callback matched exactly on the first attempt.
