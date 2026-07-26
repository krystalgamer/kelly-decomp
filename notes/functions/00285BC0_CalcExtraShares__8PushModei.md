# CalcExtraShares__8PushModei

- Address: `0x00285BC0`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 20.8333 | `candidate.cpp` |
| 2 | different | 29.1667 | 16.6667 | `candidate.cpp` |
| 3 | different | 31.25 | 20.8333 | `candidate.cpp` |
| 4 | different | 31.25 | 18.75 | `candidate.cpp` |
| 5 | different | 20.8333 | 6.25 | `candidate.cpp` |

### Attempt 1 notes

The released score/share logic emitted every substantive instruction but was
two floating-point comparison hazard nops short.

### Attempt 5 notes

Split checks, barriers, bounded comparisons, and a player reference could not
recover the hazard slots without instruction-emitting assembly.

## Outcome

The released push-share calculation remained two floating-point hazard nops short after five non-emitting source variants.
