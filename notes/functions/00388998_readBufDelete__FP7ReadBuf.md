# readBufDelete__FP7ReadBuf

- Address: `0x00388998`
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

The released static read-buffer cleanup helper is empty; a `.globl` directive preserves the isolated split symbol.

## Outcome

The released empty `readBufDelete` helper matched exactly on the first attempt.
