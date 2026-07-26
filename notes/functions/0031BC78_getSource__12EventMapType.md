# getSource__12EventMapType

- Address: `0x0031BC78`
- Size: `0xBC` (188 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.4255 | 14.8936 | `candidate.cpp` |
| 2 | different | 83.5106 | 78.7234 | `candidate.cpp` |
| 3 | different | 85.6383 | 80.8511 | `candidate.cpp` |
| 4 | different | 39.8936 | 29.7872 | `candidate.cpp` |
| 5 | different | 39.8936 | 29.7872 | `candidate.cpp` |

### Attempt 3 notes

The best variant recovered the target size and 38 of 47 instructions while
preserving count and source state, but final branch scheduling differed.

## Outcome

Five source-level variants reproduced placeholder selection, randomized source lookup, and option gating, but the original pointer and branch register allocation did not match.
