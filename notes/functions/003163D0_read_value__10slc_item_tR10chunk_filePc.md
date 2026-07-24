# read_value__10slc_item_tR10chunk_filePc

- Address: `0x003163D0`
- Size: `0x74` (116 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_item.cpp`
- Reference source: `KS/SRC/script_lib_item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.4828 | 82.7586 | `candidate.cpp` |
| 2 | different | 84.4828 | 82.7586 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 21.875 | 6.25 | `candidate.cpp` |
| 5 | different | 84.4828 | 82.7586 | `candidate.cpp` |

## Outcome

Deferred item script value reading after five source-level attempts; the released string read, virtual instance lookup, buffer store, and destruction reproduced, but the target callee-save and local-construction scheduling did not.
