# nglGetMatrix__FR9nglMatrixUi

- Address: `0x00399370`
- Size: `0xE4` (228 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.093 | 9.3023 | `candidate.cpp` |
| 2 | different | 22.093 | 9.3023 | `candidate.cpp` |
| 3 | different | 28.0702 | 14.0351 | `candidate.cpp` |
| 4 | different | 41.2281 | 10.5263 | `candidate.cpp` |
| 5 | different | 22.093 | 9.3023 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released matrix selector and scene offsets are recovered, but isolated GCC lowers the 64-byte matrix assignment as eight 64-bit copies or interleaved quadword transfers rather than the target load-all/store-all schedule.
