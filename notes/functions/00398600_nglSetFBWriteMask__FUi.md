# nglSetFBWriteMask__FUi

- Address: `0x00398600`
- Size: `0x10` (16 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter loads `nglCurScene` and writes `FBWriteMask` at scene offset `0x440`.

## Outcome

The released `nglSetFBWriteMask` nested global store matched exactly on the first attempt.
