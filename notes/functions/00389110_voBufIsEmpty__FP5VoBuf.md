# voBufIsEmpty__FP5VoBuf

- Address: `0x00389110`
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

The released static predicate tests `count` at offset `0xC` for zero; `.globl` preserves the split symbol.

## Outcome

The released `voBufIsEmpty` predicate matched exactly on the first attempt.
