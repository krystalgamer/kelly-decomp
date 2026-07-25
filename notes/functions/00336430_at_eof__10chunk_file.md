# at_eof__10chunk_file

- Address: `0x00336430`
- Size: `0x9C` (156 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.8718 | 0.0 | `candidate.cpp` |
| 2 | different | 17.3077 | 0.0 | `candidate.cpp` |
| 3 | different | 27.5641 | 2.5641 | `candidate.cpp` |
| 4 | different | 10.2564 | 0.0 | `candidate.cpp` |
| 5 | different | 25.0 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source and exact-offset variants reproduced binary, text, and stash EOF semantics, but GCC2 inlined bool register allocation did not match.
