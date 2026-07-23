# ATETextureImage__FPcRC14nglFixedStringi

- Address: `0x003ACC40`
- Size: `0x50` (80 bytes)
- Object: `ngl/ngl_ate`
- Debug source: `C:/NGL/ps2/ngl_ate.cpp`
- Reference source: `NGL/PS2/ngl_ate.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.75 | 45.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released ATETextureImage body, ATEFileEntry/nglFixedString layout, helper declaration, assertion source line, and target assertion strings. Used an equivalent found-label form to reproduce the released branch-likely schedule.

## Outcome

Matched released ATETextureImage body
