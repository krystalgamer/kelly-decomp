# UpdatePhotos__14AccompFrontEnd

- Address: `0x001D4A98`
- Size: `0x9C` (156 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/AccompFrontEnd.cpp`
- Reference source: `KS/SRC/ks/AccompFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.0238 | 7.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Restored the released cover-disable loop with one shared row pointer and preserved both UpdatePage calls; the conditional declaration reuses the shared AccompFrontEnd class during integration.

## Outcome

Matched accomplishment photo updates
