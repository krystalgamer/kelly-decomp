# KeyOn__12KeyboardMenuib

- Address: `0x001A28B8`
- Size: `0x9C` (156 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.3077 | 89.7436 | `candidate.cpp` |
| 2 | different | 9.6154 | 2.5641 | `candidate.cpp` |
| 3 | different | 92.3077 | 89.7436 | `candidate.cpp` |
| 4 | different | 88.4615 | 87.1795 | `candidate.cpp` |
| 5 | different | 92.3077 | 89.7436 | `candidate.cpp` |

## Outcome

Five released-source and ABI-layout variants reproduced all three key quad toggles at exact size; the best matched 35 of 39 instructions, but prologue and first-call scheduling differed.
