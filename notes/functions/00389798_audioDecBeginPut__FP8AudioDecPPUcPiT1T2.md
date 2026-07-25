# audioDecBeginPut__FP8AudioDecPPUcPiT1T2

- Address: `0x00389798`
- Size: `0xB0` (176 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used the real AudioDec declarations but could not compile because this reconstruction toolchain does not provide the released standard `stddef.h` include.

### Attempt 2 notes

The exact released body matched after moving `u_char`, `NULL`, the audio-state macros, and the faithful SpuStreamHeader, SpuStreamBody, and AudioDec declarations into the shared NVL MPEG header.

## Outcome

Matched audio decoder empty-area publication using the shared released AudioDec layout.
