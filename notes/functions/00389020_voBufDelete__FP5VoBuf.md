# voBufDelete__FP5VoBuf

- Address: `0x00389020`
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

The released static video-output buffer cleanup helper is empty; `.globl` preserves the split symbol.

## Outcome

The released empty `voBufDelete` helper matched exactly on the first attempt.
