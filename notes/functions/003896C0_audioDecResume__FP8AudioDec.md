# audioDecResume__FP8AudioDec

- Address: `0x003896C0`
- Size: `0x6C` (108 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.5185 | 62.963 | `candidate.cpp` |
| 2 | different | 92.5926 | 92.5926 | `candidate.cpp` |
| 3 | different | 45.5357 | 32.1429 | `candidate.cpp` |
| 4 | different | 92.5926 | 92.5926 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read volume restoration, seven sceSdRemote arguments, signed unit rounding, buffer/pause offsets, and play state. A zero-length rounded-value dependency matched on attempt 5.

## Outcome

Matched MPEG audio resume
