# endDisplay__Fv

- Address: `0x00388968`
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

The released static helper clears two display globals; `.globl` preserves the isolated symbol.

## Outcome

The released `endDisplay` global clears matched exactly on the first attempt.
