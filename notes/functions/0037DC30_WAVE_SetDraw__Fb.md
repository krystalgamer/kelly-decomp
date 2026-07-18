# WAVE_SetDraw__Fb

- Address: `0x0037DC30`
- Size: `0xC` (12 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the word-sized wave-draw global through a local absolute equate.

## Outcome

The released `WAVE_SetDraw` global store matched exactly on the first attempt.
