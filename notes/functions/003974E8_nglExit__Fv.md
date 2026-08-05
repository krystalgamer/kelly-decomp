# nglExit__Fv

- Address: `0x003974E8`
- Size: `0x24` (36 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 55.5556 | `size36-ngl-exit-1.cpp` |
| 2 | matched | 100.0 | 100.0 | `size36-ngl-exit-2.cpp` |
| 3 | different | 17.3077 | 0.0 | `size36-ngl-exit-3.cpp` |

### Attempt 1 notes

The released shutdown order is retained; an ordinary local pointer for the final SDK call prevents sibling-call folding without a barrier.

## Outcome

The released `nglExit` wrapper matched exactly.
