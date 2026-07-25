# audioDecCreate__FP8AudioDecPUcii

- Address: `0x00389540`
- Size: `0xB8` (184 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.6739 | 58.6957 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released initialization logic matches after expressing the two allocation
checks as a nested success path with one shared error return.

## Outcome

Released audio decoder initialization and shared allocation failure path reproduce the target exactly.
