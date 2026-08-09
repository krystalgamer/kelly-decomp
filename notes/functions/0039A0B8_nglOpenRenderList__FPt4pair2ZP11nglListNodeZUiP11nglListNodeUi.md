# nglOpenRenderList__FPt4pair2ZP11nglListNodeZUiP11nglListNodeUi

- Address: `0x0039A0B8`
- Size: `0x2C` (44 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 2 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 3 | different | 86.3636 | 81.8182 | `candidate.cpp` |

## Outcome

Three native loop forms keep the output increment before the branch. The
annotation-dependent exact form was removed and the loop was deferred.
