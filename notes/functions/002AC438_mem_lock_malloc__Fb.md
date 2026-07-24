# mem_lock_malloc__Fb

- Address: `0x002AC438`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/archalloc.cpp`
- Reference source: `KS/SRC/archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.1562 | 0.0 | `candidate.cpp` |
| 2 | different | 15.625 | 3.125 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 79.6875 | 75.0 | `candidate.cpp` |
| 5 | different | 77.3438 | 75.0 | `candidate.cpp` |

## Outcome

Deferred the released malloc-lock toggle after five source-level attempts; the boolean logic matched, but the target global-base saved-register prologue layout remained different.
