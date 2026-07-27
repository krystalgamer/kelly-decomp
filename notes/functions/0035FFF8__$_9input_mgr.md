# _$_9input_mgr

- Address: `0x0035FFF8`
- Size: `0xF0` (240 bytes)
- Object: `game/files_vsim`
- Debug source: `inputmgr.h`
- Reference source: `KS/SRC/inputmgr.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 23.75 | 1.6667 | `variant-2.cpp` |
| 3 | different | 21.25 | 1.6667 | `variant-3.cpp` |
| 4 | different | 23.75 | 1.6667 | `variant-4.cpp` |
| 5 | different | 21.25 | 1.6667 | `variant-5.cpp` |

## Outcome

No exact match after five attempts; the best scratch candidate reproduces the map erase/free and vector free logic but emits different virtual-base destructor handling.
