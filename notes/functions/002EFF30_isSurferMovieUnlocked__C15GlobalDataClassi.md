# isSurferMovieUnlocked__C15GlobalDataClassi

- Address: `0x002EFF30`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor indexes 120-byte surfer records beginning at `0x134` and returns movie state at record offset `0x4`.

## Outcome

The released `GlobalDataClass::isSurferMovieUnlocked` indexed load matched exactly on the first attempt.
