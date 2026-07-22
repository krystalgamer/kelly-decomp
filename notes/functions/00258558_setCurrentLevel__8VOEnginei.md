# setCurrentLevel__8VOEnginei

- Address: `0x00258558`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/VOEngine.cpp`
- Reference source: `KS/SRC/ks/VOEngine.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `VOEngine.cpp:414-420` body and created a shared
released-layout VOEngine declaration.  The original visit and challenge arrays
place `currentLevel`, `myTimer`, and `currentSound` at their shipped offsets.

## Outcome

Matched the current-level sound reset byte-for-byte.
