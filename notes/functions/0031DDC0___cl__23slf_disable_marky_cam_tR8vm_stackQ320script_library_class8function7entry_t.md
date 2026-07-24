# __cl__23slf_disable_marky_cam_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031DDC0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.5217 | 43.4783 | `candidate.cpp` |
| 2 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 3 | different | 75.0 | 65.2174 | `candidate.cpp` |
| 4 | different | 73.913 | 60.8696 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact released SLF body, vm_stack/thread layout, game global, sync conversion, and priority. Volatile source/global accesses preserved target ordering on attempt 5.

## Outcome

Matched disable marky camera script function
