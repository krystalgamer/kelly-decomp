# nglSetQuadVUV__FP7nglQuadiff

- Address: `0x003A6AB8`
- Size: `0x1C` (28 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The reconstructed 20-byte quad vertex layout places U/V at offsets eight and twelve.

## Outcome

The released `nglSetQuadVUV` indexed setter matched exactly.
