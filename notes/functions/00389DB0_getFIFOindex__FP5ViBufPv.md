# getFIFOindex__FP5ViBufPv

- Address: `0x00389DB0`
- Size: `0x44` (68 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.5882 | 58.8235 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt notes

Attempt one used the exact released body, ViBuf prefix, DmaAddr mask, and element size. The diff showed only opposite equivalent branch layout, so attempt two inverted the condition while preserving behavior and target fallthrough.

## Outcome

The FIFO index helper matches exactly.
