# unlockLocationBoard__15GlobalDataClassi

- Address: `0x002EFFB0`
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

The released setter indexes 12-byte location records and sets `board_unlocked` at record offset `0x8`.

## Outcome

The released `GlobalDataClass::unlockLocationBoard` indexed store matched exactly on the first attempt.
