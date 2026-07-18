# nglGetScreenHeight__Fv

- Address: `0x00395D98`
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

The released accessor returns the display-height global through a local absolute equate.

## Outcome

The released `nglGetScreenHeight` global load matched exactly on the first attempt.
