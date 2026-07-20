# readBufBeginPut__FP7ReadBufPPUc

- Address: `0x003889A0`
- Size: `0x30` (48 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released circular-buffer free-space calculation and put-pointer update matched exactly with the recovered 0x50000-byte data area.

## Outcome

The released NVL read-buffer begin-put helper matched exactly on the first attempt.
