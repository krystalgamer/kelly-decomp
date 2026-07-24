# __tf11storage_mgr

- Address: `0x001E97C8`
- Size: `0x78` (120 bytes)
- Object: `game/files_hwosps2`
- Debug source: `osstorage.h`
- Reference source: `KS/SRC/osstorage.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 16.6667 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 24.1667 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred storage_mgr RTTI generation after five source-level attempts; the released singleton inheritance and generated RTTI calls reproduced, but the target global-address register allocation did not.
