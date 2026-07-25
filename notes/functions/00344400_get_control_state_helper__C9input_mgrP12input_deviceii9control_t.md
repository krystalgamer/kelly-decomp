# get_control_state_helper__C9input_mgrP12input_deviceii9control_t

- Address: `0x00344400`
- Size: `0x9C` (156 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 38.4615 | `candidate.cpp` |
| 2 | different | 48.7179 | 38.4615 | `candidate.cpp` |
| 3 | different | 50.0 | 38.4615 | `candidate.cpp` |
| 4 | different | 50.0 | 38.4615 | `candidate.cpp` |
| 5 | different | 51.9231 | 43.5897 | `candidate.cpp` |

## Outcome

Five released-source control-threshold variants reproduced boolean-axis clamping, but the target retained two FPU hazard nops unavailable from source scheduling.
