# register_mfg_lib__Fv

- Address: `0x00319860`
- Size: `0xA4` (164 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_mfg.cpp`
- Reference source: `KS/SRC/script_lib_mfg.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.9268 | 65.8537 | `candidate.cpp` |
| 2 | different | 86.5854 | 80.4878 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 86.5854 | 80.4878 | `candidate.cpp` |
| 5 | different | 86.5854 | 80.4878 | `candidate.cpp` |

## Outcome

Five released MFG registration variants reproduced both allocations and constructors but not allocator argument scheduling.
