# map_control__9input_mgri11device_id_ti

- Address: `0x00343F78`
- Size: `0x90` (144 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.4444 | 94.4444 | `candidate.cpp` |
| 2 | different | 35.1351 | 21.6216 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 94.4444 | 94.4444 | `candidate.cpp` |
| 5 | different | 35.1351 | 21.6216 | `candidate.cpp` |

## Outcome

Five released-body candidates reproduced every operation but consistently swapped two prologue instructions that save s0 and retain the device argument; the best reached 94.44%.
