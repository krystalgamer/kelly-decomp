# OnClose__14MenuEntityDrawb

- Address: `0x0030EC18`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.25 | 72.5 | `candidate.cpp` |
| 2 | different | 95.0 | 95.0 | `candidate.cpp` |
| 3 | different | 25.0 | 7.1429 | `candidate.cpp` |
| 4 | different | 95.0 | 95.0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Five released-source variants reproduced entry deletion and lock restoration at exact size; the best differed only in two prologue scheduling instructions.
