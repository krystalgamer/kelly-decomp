# read_value__16slc_controller_tR10chunk_filePc

- Address: `0x003180C8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.cpp`
- Reference source: `KS/SRC/script_lib_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.9677 | 77.4194 | `candidate.cpp` |
| 2 | different | 80.6452 | 77.4194 | `candidate.cpp` |
| 3 | different | 25.7353 | 5.8824 | `candidate.cpp` |
| 4 | different | 80.6452 | 77.4194 | `candidate.cpp` |
| 5 | different | 80.6452 | 75.0 | `candidate.cpp` |

## Outcome

Deferred the released controller script-value reader after five source-level attempts; the exact string lifecycle and virtual lookup body remained blocked by prologue scheduling differences.
