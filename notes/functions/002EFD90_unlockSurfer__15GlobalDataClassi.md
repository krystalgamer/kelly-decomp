# unlockSurfer__15GlobalDataClassi

- Address: `0x002EFD90`
- Size: `0x18` (24 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter indexes 120-byte surfer records beginning at `0x134` and sets `unlocked`.

## Outcome

The released `GlobalDataClass::unlockSurfer` indexed store matched exactly on the first attempt.
