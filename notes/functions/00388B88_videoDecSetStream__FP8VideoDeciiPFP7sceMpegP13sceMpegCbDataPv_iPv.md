# videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv

- Address: `0x00388B88`
- Size: `0x20` (32 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released local helper forwards the MPEG object and callback parameters to the SDK, then returns success; a global bridge preserves split-object linkage.

## Outcome

The local `videoDecSetStream` wrapper matched exactly.
