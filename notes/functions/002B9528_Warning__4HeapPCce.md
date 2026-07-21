# Warning__4HeapPCce

- Address: `0x002B9528`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/heap.cpp`
- Reference source: `KS/SRC/heap.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.6429 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 28.5714 | 7.1429 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 19.6429 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the empty final-build variadic member function. EE GCC saved only unnamed integer arguments with SQ and omitted the target SD/SWC1 full variadic setup.

### Attempt 2 notes

Used the released `va_list` and `va_start` shape through `stdarg.h`. The isolated toolchain does not expose that header in its configured include paths, so the candidate did not compile.

### Attempt 3 notes

Used the legacy `__builtin_saveregs` entry point. The compiler emitted a helper-oriented 52-byte setup with different saves instead of the target inline prologue.

### Attempt 4 notes

Used `__builtin_va_start` with a local pointer. This EE GCC does not recognize that builtin and rejected the candidate.

### Attempt 5 notes

Used `__builtin_next_arg` to model the released `va_start`. The unused value optimized away, returning to the same 36-byte empty variadic member stub.

## Outcome

Five source-authentic final-build variadic forms could not reproduce the target inline SD/SWC1 argument-save prologue with the isolated EE GCC toolchain.
