# videoDecCreate__FP8VideoDecPUciPUxT3iP9TimeStampi

- Address: `0x00388A88`
- Size: `0x100` (256 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released function body from NVL/PS2/nvlMPEG_ps2.cpp lines 842-853 was tested once. Compilation failed because the compile-only prefix declared released static callees without definitions; no second attempt was made.

## Outcome

The exact released video-decoder initializer failed the isolated compile because its released static callback definitions were unavailable; the sole attempt scored 0%.
