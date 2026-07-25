# _$_9lensflare

- Address: `0x002C27C8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/lensflare.cpp`
- Reference source: `KS/SRC/lensflare.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 23.3333 | 8.8889 | `candidate.cpp` |
| 3 | different | 23.3333 | 8.8889 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 83.125 | 70.0 | `candidate.cpp` |

## Outcome

Five released-source pointer-loop variants reproduced flare cleanup, but deleting-destructor scheduling did not match.
