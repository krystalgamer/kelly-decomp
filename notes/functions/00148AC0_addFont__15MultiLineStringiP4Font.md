# addFont__15MultiLineStringiP4Font

- Address: `0x00148AC0`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method indexes the font array at offset `0x58` with four-byte pointers.

## Outcome

The released `MultiLineString::addFont` indexed pointer store matched exactly on the first attempt.
