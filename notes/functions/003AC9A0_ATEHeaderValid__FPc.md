# ATEHeaderValid__FPc

- Address: `0x003AC9A0`
- Size: `0x90` (144 bytes)
- Object: `ngl/ngl_ate`
- Debug source: `C:/NGL/ps2/ngl_ate.cpp`
- Reference source: `NGL/PS2/ngl_ate.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.8889 | 0.0 | `candidate.cpp` |
| 2 | different | 85.4167 | 66.6667 | `candidate.cpp` |
| 3 | different | 84.7222 | 66.6667 | `candidate.cpp` |
| 4 | different | 84.7222 | 66.6667 | `candidate.cpp` |
| 5 | different | 85.4167 | 66.6667 | `candidate.cpp` |

## Outcome

Five released-body candidates reproduced all validation branches but could not match the inlined MAGIC byte-load/register assembly; the best reached 85.42% byte score.
