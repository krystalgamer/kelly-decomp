# nglSetQuadBlend__FP7nglQuadUiUi

- Address: `0x003A69B0`
- Size: `0xC` (12 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `BlendMode` at `0x58` then `BlendModeConstant` at `0x5C`; scheduling moves the first store into the delay slot.

## Outcome

The released `nglSetQuadBlend` assignments matched exactly on the first attempt.
