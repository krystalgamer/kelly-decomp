# nglSetQuadColor__FP7nglQuadUi

- Address: `0x003A69E8`
- Size: `0x14` (20 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the same color at quad vertex offsets `0x10`, `0x24`, `0x38`, and `0x4C`.

## Outcome

The released `nglSetQuadColor` four vertex stores matched exactly on the first attempt.
