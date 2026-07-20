# nglVif1AddBatchSetup__FRPUiUii

- Address: `0x003A8C68`
- Size: `0x2C` (44 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper emits the VIF unpack command and flagged vertex count, then advances the packet by two words.

## Outcome

The released NGL VIF batch-setup helper matched exactly on the first attempt.
