# WAVE_ListAdd__Fv

- Address: `0x00374930`
- Size: `0x80` (128 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.0938 | 84.375 | `candidate.cpp` |
| 2 | different | 96.875 | 87.5 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released wave list submission matched after reconstructing the full 80-byte render-parameter layout and correcting the negative-low mesh ID alias.

## Outcome

The released wave list submission matched exactly on the third attempt.
