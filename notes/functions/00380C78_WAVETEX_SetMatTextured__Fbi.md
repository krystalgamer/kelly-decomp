# WAVETEX_SetMatTextured__Fbi

- Address: `0x00380C78`
- Size: `0x90` (144 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.1667 | 50.0 | `candidate.cpp` |
| 2 | different | 77.7778 | 50.0 | `candidate.cpp` |
| 3 | different | 86.1111 | 63.8889 | `candidate.cpp` |
| 4 | different | 99.3056 | 97.2222 | `candidate.cpp` |
| 5 | different | 99.3056 | 97.2222 | `candidate.cpp` |

## Outcome

Five source-level material updates reproduced 35/36 target instructions; the final candidate differed only in the signed-versus-unsigned detail-map flag shift (99.31% byte score).
