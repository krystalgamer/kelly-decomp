# __cl__30slf_signaller_enable_signals_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003283A8`
- Size: `0x28` (40 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_signal.cpp`
- Reference source: `KS/SRC/script_lib_signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used an integer typedef for `entry_t`, so the emitted symbol did not preserve the released nested enum type in its mangling.

### Attempt 2 notes

The released `SLF_PARMS` and `SLF_DONE` forms pop the signaller parameter, clear its disabled flag, and return completion.

## Outcome

The released `slf_signaller_enable_signals_t` execution body matched exactly.
