# __cl__11slf_delay_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031EC08`
- Size: `0x54` (84 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.7143 | 23.8095 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released delay operator, SLF_SDATA/SLF_PARMS layout, FIRST_ENTRY/RECALL semantics, SCRIPT_TIME_INC source and world offset. Making the released first-entry/done control flow explicit matched byte-exactly on attempt 2.

## Outcome

Matched released slf_delay operator
