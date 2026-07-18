# nvlMPEGSetMemoryAllocCallback__FPFii_Pv

- Address: `0x00388338`
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

The released setter writes the allocation callback global through a local absolute equate.

## Outcome

The released `nvlMPEGSetMemoryAllocCallback` global store matched exactly on the first attempt.
