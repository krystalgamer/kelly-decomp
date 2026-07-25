# _$_13IconChallenge

- Address: `0x002608C0`
- Size: `0x9C` (156 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 38.4615 | 28.2051 | `candidate.cpp` |
| 3 | different | 26.2821 | 12.8205 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 41.0256 | 28.2051 | `candidate.cpp` |

## Outcome

Five released-source and explicit array-destruction variants reproduced icon element and base cleanup, but GCC2 vector-delete loop scheduling did not match.
