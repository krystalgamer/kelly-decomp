# videoDecSetState__FP8VideoDecUi

- Address: `0x00388C30`
- Size: `0xC` (12 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static helper returns the old state while storing the replacement at offset `0xA8`; `.globl` preserves the split symbol.

## Outcome

The released `videoDecSetState` exchange matched exactly on the first attempt.
