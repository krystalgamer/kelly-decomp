# __8KSReplay

- Address: `0x0023AC98`
- Size: `0xA0` (160 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 0.0 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 65.625 | 55.0 | `candidate.cpp` |
| 4 | different | 65.625 | 55.0 | `candidate.cpp` |
| 5 | different | 73.75 | 67.5 | `candidate.cpp` |

## Outcome

Five released-source and explicit field-initialization variants reproduced replay defaults at exact size, but member-constructor and store scheduling did not match.
