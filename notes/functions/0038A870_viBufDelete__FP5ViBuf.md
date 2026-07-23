# viBufDelete__FP5ViBuf

- Address: `0x0038A870`
- Size: `0x58` (88 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released viBufDelete body, ViBuf semaphore offset, D4 register addresses, CHCR value/helper, DeleteSema, and true return. It matched byte-exactly.

## Outcome

Matched released video buffer delete
