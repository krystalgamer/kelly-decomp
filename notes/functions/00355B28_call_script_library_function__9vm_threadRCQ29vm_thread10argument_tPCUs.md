# call_script_library_function__9vm_threadRCQ29vm_thread10argument_tPCUs

- Address: `0x00355B28`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.7353 | 0.0 | `candidate.cpp` |
| 2 | different | 80.1471 | 73.5294 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released VM library-function call matched after expressing the successful return path first while retaining the data-stack pointer across the virtual call.

## Outcome

The released VM library-function call matched exactly on the third attempt.
