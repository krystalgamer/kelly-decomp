# _$_t5Table1Z8cbVector

- Address: `0x00270FF0`
- Size: `0x64` (100 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_table.h`
- Reference source: `KS/SRC/ks/dxt1_table.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.5312 | 9.375 | `candidate.cpp` |
| 2 | different | 52.7778 | 30.4348 | `candidate.cpp` |
| 3 | different | 52.7778 | 30.4348 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 48.1481 | 26.087 | `candidate.cpp` |

## Outcome

Released Table<cbVector> destruction requires a compiler-generated empty element loop with five padding nops; five source-level candidates could not reproduce its exact deleting-destructor control flow.
