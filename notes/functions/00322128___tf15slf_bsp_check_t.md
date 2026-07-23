# __tf15slf_bsp_check_t

- Address: `0x00322128`
- Size: `0x50` (80 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.75 | 95.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released class declaration/inheritance and RTTI body from the released reference tree. Reused the shared RTTI pattern with exact target typeinfo and name pointers.

## Outcome

Matched released RTTI body for slf_bsp_check_t
