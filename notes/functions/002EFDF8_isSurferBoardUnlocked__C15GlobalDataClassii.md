# isSurferBoardUnlocked__C15GlobalDataClassii

- Address: `0x002EFDF8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The reconstructed array begins at 0xcc, uses the target 120-byte surfer stride, and stores word-sized booleans.

## Outcome

The released `GlobalDataClass::isSurferBoardUnlocked` indexed accessor matched exactly on the first attempt.
