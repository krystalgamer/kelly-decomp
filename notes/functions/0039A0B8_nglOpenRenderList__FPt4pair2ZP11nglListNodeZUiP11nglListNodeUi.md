# nglOpenRenderList__FPt4pair2ZP11nglListNodeZUiP11nglListNodeUi

- Address: `0x0039A0B8`
- Size: `0x2C` (44 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 2 | different | 81.8182 | 72.7273 | `candidate.cpp` |
| 3 | different | 86.3636 | 81.8182 | `candidate.cpp` |
| 4 | different | 86.3636 | 81.8182 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released loop copies each node and hash, loads `Next`, then advances the output pair in the backedge delay slot. Four source forms kept the increment before the branch. The explicit `nop` is a matching-only annotation for the target's existing load-hazard slot; the labeled backedge preserves the released iterator schedule.

## Outcome

The released `nglOpenRenderList` loop matched exactly on attempt five.
