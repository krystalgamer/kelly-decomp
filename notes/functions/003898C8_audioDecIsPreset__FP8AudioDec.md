# audioDecIsPreset__FP8AudioDec

- Address: `0x003898C8`
- Size: `0x14` (20 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static predicate compares the values at offsets `0x54` and `0x48`; `.globl` preserves the split symbol.

## Outcome

The released `audioDecIsPreset` comparison matched exactly on the first attempt.
