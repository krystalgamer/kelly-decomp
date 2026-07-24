# nvlInitMutex__FPi

- Address: `0x00387330`
- Size: `0x70` (112 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.2857 | 57.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released NVL mutex initialization, exact SemaParam layout, assertion strings/lines, and CreateSema checks. Correcting the platform struct size and source store order matched on attempt 2.

## Outcome

Matched NVL mutex initialization
