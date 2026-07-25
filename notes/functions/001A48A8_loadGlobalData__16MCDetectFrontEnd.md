# loadGlobalData__16MCDetectFrontEnd

- Address: `0x001A48A8`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.0278 | 52.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released global-data load matched after spelling the not-found path first, preserving the target branch layout.

## Outcome

The released global-data load matched exactly on the second attempt.
