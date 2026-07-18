# readBufCreate__FP7ReadBuf

- Address: `0x00388980`
- Size: `0x18` (24 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released static initializer clears `put`/`count` after the `0x50000`-byte data buffer and sets `size`; `.globl` preserves the split symbol.

## Outcome

The released `readBufCreate` large-offset stores matched exactly on the first attempt.
