# isSurferUnlocked__C15GlobalDataClassi

- Address: `0x002EFD78`
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

The released accessor indexes 120-byte surfer records beginning at `0x134` and returns `unlocked`.

## Outcome

The released `GlobalDataClass::isSurferUnlocked` indexed load matched exactly on the first attempt.
