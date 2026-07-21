# low_level_console_print__FPce

- Address: `0x001E2790`
- Size: `0x38` (56 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
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

Used the empty final-build variadic stub. EE GCC saved integer argument registers with SQ and omitted floating argument saves, producing 40 bytes instead of the target SD/SWC1 setup.

### Attempt 2 notes

Used the released `va_list` and `va_start` shape through `stdarg.h`. The isolated toolchain does not expose that header in its configured include paths, so the candidate did not compile.

### Attempt 3 notes

Used the legacy `__builtin_saveregs` entry point. The compiler emitted a helper-based setup with different stores and register handling rather than the target inline variadic prologue.

### Attempt 4 notes

Used `__builtin_va_start` with a local argument pointer. This EE GCC does not recognize that builtin and rejected the candidate.

### Attempt 5 notes

Used `__builtin_next_arg` to model the released `va_start` setup. The unused value optimized away, leaving the same 40-byte empty variadic stub as attempt one.

## Outcome

Five source-authentic variadic stub and va_start forms could not reproduce the target inline SD/SWC1 argument-save prologue with the isolated EE GCC toolchain.
