# changeText__10RandomTextG7stringx

- Address: `0x001494B8`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 93.1818 | 90.9091 | `candidate.cpp` |
| 3 | different | 30.6818 | 9.0909 | `candidate.cpp` |
| 4 | different | 93.1818 | 90.9091 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact released RandomText::changeText body, stringx layout/copy/assignment/destructor helpers, base changeText ABI, and text/random-data offsets. Reconstructed the by-value temporary explicitly with target registers; attempt 5 matched byte-exactly.

## Outcome

Matched released RandomText changeText body
