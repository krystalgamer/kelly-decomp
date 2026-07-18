# nglGetScreenWidth__Fv

- Address: `0x00395D88`
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

The released accessor returns the display-width global through a local absolute equate.

## Outcome

The released `nglGetScreenWidth` global load matched exactly on the first attempt.
