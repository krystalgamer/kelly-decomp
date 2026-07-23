# Select__13PhotoSaveMenui

- Address: `0x001CFC00`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released two-way Select body and menu/system declarations. Correcting the signed int mangling yielded a byte-exact match on attempt 2.

## Outcome

Matched photo save menu selection
