# nglTim2GetClut__FP10nglTexture

- Address: `0x0039F8A0`
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

The released helper loads the picture header at texture offset `0x18`, reads its halfword size at `0xC`, and returns the following CLUT address.

## Outcome

The released `nglTim2GetClut` address calculation matched exactly on the first attempt.
