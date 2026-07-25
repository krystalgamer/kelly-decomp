# frame_advance__13message_boardf

- Address: `0x002CEFB8`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/msgboard.cpp`
- Reference source: `KS/SRC/msgboard.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.8684 | 7.8947 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 19.7368 | 2.6316 | `candidate.cpp` |
| 4 | different | 16.8269 | 3.8462 | `candidate.cpp` |
| 5 | different | 12.5 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source message board loop variants reproduced timer updates and clamping, but vector-size arithmetic and loop register/branch scheduling did not match.
