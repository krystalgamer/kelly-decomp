# nglTim2GetMipMapPictureSize__FP18TIM2_PICTUREHEADERiPiT2

- Address: `0x0039F8D8`
- Size: `0x88` (136 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.7941 | 100.0 | `candidate.cpp` |
| 2 | different | 97.7941 | 100.0 | `candidate.cpp` |
| 3 | different | 29.1667 | 16.6667 | `candidate.cpp` |
| 4 | different | 97.7941 | 100.0 | `candidate.cpp` |
| 5 | different | 30.1471 | 17.6471 | `candidate.cpp` |

## Outcome

Deferred the released TIM2 mipmap-size helper after five source-level attempts; dimension shifts, format scaling, output writes, and 16-byte alignment matched instruction-for-instruction, but the standalone jump table could not use the target ROM address.
