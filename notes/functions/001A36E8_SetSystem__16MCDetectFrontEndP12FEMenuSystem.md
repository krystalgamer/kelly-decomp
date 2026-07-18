# SetSystem__16MCDetectFrontEndP12FEMenuSystem

- Address: `0x001A36E8`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The menu-system pointer is stored at `MCDetectFrontEnd` offset `0x50`.
Assigning the pointer matched the target store.

## Outcome

The menu-system pointer is stored at MCDetectFrontEnd offset 0x50. The first layout candidate matched exactly and preserved the byte-identical integrated ROM.
