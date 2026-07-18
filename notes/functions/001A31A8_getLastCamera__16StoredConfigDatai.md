# getLastCamera__16StoredConfigDatai

- Address: `0x001A31A8`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GameData.cpp`
- Reference source: `KS/SRC/ks/GameData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor indexes 20-byte camera strings beginning at offset `0x30`.

## Outcome

The released `StoredConfigData::getLastCamera` address calculation matched exactly on the first attempt.
