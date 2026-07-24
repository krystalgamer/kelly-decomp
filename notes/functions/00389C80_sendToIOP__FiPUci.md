# sendToIOP__FiPUci

- Address: `0x00389C80`
- Size: `0x80` (128 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.3125 | 93.1034 | `candidate.cpp` |
| 2 | different | 70.3125 | 93.1034 | `candidate.cpp` |
| 3 | different | 70.3125 | 93.1034 | `candidate.cpp` |
| 4 | different | 64.0625 | 65.5172 | `candidate.cpp` |
| 5 | different | 67.9688 | 38.7097 | `candidate.cpp` |

## Outcome

Deferred the released IOP DMA send helper after five source-level attempts; all operations matched, but three target-preserved wait-loop nops could not be reproduced.
