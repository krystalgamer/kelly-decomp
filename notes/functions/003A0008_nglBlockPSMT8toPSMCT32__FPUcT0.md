# nglBlockPSMT8toPSMCT32__FPUcT0

- Address: `0x003A0008`
- Size: `0x94` (148 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 99.3243 | 97.2973 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released nested LUT conversion loops matched after correcting the negative-low LUT nominal address.

## Outcome

Matched PSMT8 block conversion
