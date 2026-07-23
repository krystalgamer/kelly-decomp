# nglReleaseFile__FP10nglFileBuf

- Address: `0x00395CB8`
- Size: `0x54` (84 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.0455 | 31.8182 | `candidate.cpp` |
| 2 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released nglReleaseFile body, nglFileBuf and callback layouts, negative-low callback global, nglMemFree/memset helpers, and 12-byte clear size. Moving the non-emitting continuation into the fallback branch reproduced the duplicated return-address load schedule and matched on attempt 3.

## Outcome

Matched released nglReleaseFile body
