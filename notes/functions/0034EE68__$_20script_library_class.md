# _$_20script_library_class

- Address: `0x0034EE68`
- Size: `0x184` (388 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Status: **compile_failed**
- Byte score: **0.0%**
- Instruction score: **0.0%** (not emitted)
- Candidate: `tmp/functions/0034EE68__$_20script_library_class/attempt-1/candidate.cpp`
- SHA-1: `af308daf6ddf6c23910c01a6785ed3288518e62b`
- Exact released destructor body from `kelly-slaters-pro-surfer/KS/SRC/script_library_class.cpp:41-45`, with the released class declaration cited at `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:16-82`.
- Compilation failed because Wine GCC could not resolve the candidate-relative released header paths. No retry or source variant was attempted.

## Outcome

The exact released script-library-class destructor failed to compile in the isolated bench; no source variant was attempted.
