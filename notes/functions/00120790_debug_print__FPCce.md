# debug_print__FPCce

- Address: `0x00120790`
- Size: `0x38` (56 bytes)
- Object: `game/files_anim`
- Debug source: `debug.h`
- Reference source: `KS/SRC/debug.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 37.5 | 7.1429 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 48.2143 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

Used an empty final-build variadic stub. EE GCC saved the integer argument registers with SQ and omitted floating argument saves, producing 40 bytes rather than the target SD/SWC1 variadic setup.

### Attempt 2 notes

Used the released va_list/va_start shape via stdarg.h. The isolated toolchain has no stdarg.h in its configured include paths, so the candidate did not compile.

### Attempt 3 notes

Used the legacy __builtin_saveregs entry point directly. This compiler emitted an unresolved helper call, a 144-byte frame, and SQ register saves rather than the target inline variadic setup.

### Attempt 4 notes

Tried __builtin_va_start with a local pointer. EE GCC 2.9 does not recognize this builtin and rejected the candidate.

### Attempt 5 notes

Used __builtin_next_arg to model the released va_start setup. The value optimized away, leaving the same 40-byte empty variadic stub as attempt 1.

## Outcome

Five source-authentic variadic setup candidates could not reproduce the target inline SD/SWC1 register-save sequence with the isolated EE GCC headers/builtins.
