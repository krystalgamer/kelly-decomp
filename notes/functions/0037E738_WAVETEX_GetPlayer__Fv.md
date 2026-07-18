# WAVETEX_GetPlayer__Fv

- Address: `0x0037E738`
- Size: `0xC` (12 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns the wave-texture player global through a local absolute equate.

## Outcome

The released `WAVETEX_GetPlayer` global load matched exactly on the first attempt.
