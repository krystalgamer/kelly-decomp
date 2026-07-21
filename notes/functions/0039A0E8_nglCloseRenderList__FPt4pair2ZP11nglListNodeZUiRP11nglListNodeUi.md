# nglCloseRenderList__FPt4pair2ZP11nglListNodeZUiRP11nglListNodeUi

- Address: `0x0039A0E8`
- Size: `0x3C` (60 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 2 | different | 70.0 | 66.6667 | `candidate.cpp` |
| 3 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 4 | different | 70.0 | 66.6667 | `candidate.cpp` |
| 5 | different | 86.6667 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

Authentic for/do-while loop and narrow barrier variants matched behavior but scheduled the pointer decrement before the branch rather than in its delay slot.

### Attempt 2 notes

Authentic for/do-while loop and narrow barrier variants matched behavior but scheduled the pointer decrement before the branch rather than in its delay slot.

### Attempt 3 notes

Authentic for/do-while loop and narrow barrier variants matched behavior but scheduled the pointer decrement before the branch rather than in its delay slot.

### Attempt 4 notes

Authentic for/do-while loop and narrow barrier variants matched behavior but scheduled the pointer decrement before the branch rather than in its delay slot.

### Attempt 5 notes

Authentic for/do-while loop and narrow barrier variants matched behavior but scheduled the pointer decrement before the branch rather than in its delay slot.

## Outcome

Authentic render-list reversal loops could not reproduce the target pointer-decrement delay-slot schedule within five attempts.
