# strFileClose__FP7StrFile

- Address: `0x003894B0`
- Size: `0x50` (80 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released StrFile layout and strFileClose body, including CD stream shutdown, IOP heap release, file-descriptor close, and return value.

## Outcome

Matched released strFileClose body
