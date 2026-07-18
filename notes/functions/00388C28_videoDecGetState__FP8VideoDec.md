# videoDecGetState__FP8VideoDec

- Address: `0x00388C28`
- Size: `0x8` (8 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static accessor returns `state` from offset `0xA8`; `.globl` preserves the split symbol.

## Outcome

The released `videoDecGetState` accessor matched exactly on the first attempt.
