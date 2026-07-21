# __cl__30slf_trigger_set_use_any_char_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003290A0`
- Size: `0x38` (56 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_trigger.cpp`
- Reference source: `KS/SRC/script_lib_trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF pops its trigger and numeric argument, converts the number to a boolean, and uses the inline set_use_any_char setter. The original SLF macros and recovered member offset match exactly.

## Outcome

The original trigger use-any-character SLF matches exactly while preserving SLF_PARMS/SLF_DONE and the inline setter.
