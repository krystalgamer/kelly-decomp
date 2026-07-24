# nglHostPrintf__FUiPCce

- Address: `0x003AA9D8`
- Size: `0x7C` (124 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 24.1935 | 16.129 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 20.9677 | 6.4516 | `candidate.cpp` |

## Outcome

Deferred the released NGL host printf after five source-level attempts; the stripped compiler environment lacks the original stdarg macro ABI needed to reproduce the mixed integer/FPU saveregs frame.
