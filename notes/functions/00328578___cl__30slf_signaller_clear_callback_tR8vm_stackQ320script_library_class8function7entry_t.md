# __cl__30slf_signaller_clear_callback_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00328578`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_signal.cpp`
- Reference source: `KS/SRC/script_lib_signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS`/`SLF_DONE` body pops a signaller and string pointer, dereferences the name, and calls `clear_script_callback`.

## Outcome

The released signaller clear-callback SLF matched exactly on the first attempt.
