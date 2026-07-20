# __cl__31slf_signaller_clear_callbacks_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003284D8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_signal.cpp`
- Reference source: `KS/SRC/script_lib_signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS` and `SLF_DONE` forms pop the signaller parameter, call `clear_script_callbacks`, and return completion.

## Outcome

The released `slf_signaller_clear_callbacks_t` execution body matched exactly on the first attempt.
