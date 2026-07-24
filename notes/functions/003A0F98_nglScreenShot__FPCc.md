# nglScreenShot__FPCc

- Address: `0x003A0F98`
- Size: `0x74` (116 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.4828 | 27.5862 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released explicit/default screenshot paths, back-buffer/count/buffer globals, formatting string, and texture-save calls. Preserving a common epilogue matched on attempt 2.

## Outcome

Matched NGL screenshot capture
