# get_control_trigger__C9input_mgr11device_id_ti

- Address: `0x00344860`
- Size: `0x6C` (108 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.9259 | 62.963 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the delta/state calls and exact float equality result. A false-path compiler barrier preserved the released FPU branch scheduling and matched on attempt 2.

## Outcome

Matched input control trigger
