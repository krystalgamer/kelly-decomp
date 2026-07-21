# nvlPrintf__FPCce

- Address: `0x0038AD50`
- Size: `0x38` (56 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 48.2143 | 7.1429 | `candidate.cpp` |
| 5 | different | 48.2143 | 7.1429 | `candidate.cpp` |

### Attempt 1 notes

The non-debug released NVL variadic logger has an empty body. Preserving the variadic signature reproduces the required incoming integer and floating-point argument save area exactly.

### Attempt 2 notes

Made the implicit variadic setup explicit with compiler builtins. The available compiler still omitted the floating argument saves and its wrapper normalized integer stack saves to `sq`, unlike this NVL target.

### Attempt 3 notes

Used the released stdarg spelling with va_start/va_end but no formatting work. This tests whether standard variadic bookkeeping preserves the full released save area.

### Attempt 4 notes

Explicitly discarded the named format argument while retaining the released empty variadic behavior. Optimization produced the same short save area as attempt 1.

### Attempt 5 notes

Expressed the no-op body with an explicit conditional return. The compiler again removed the body and emitted its 40-byte variadic stub, leaving the released floating saves and `sd` integer saves unmatched.

## Outcome

The released non-debug NVL logger is correctly identified as an empty variadic function, but the available isolated compiler omits its floating argument saves and normalizes stack saves differently. Five source candidates were exhausted without compiler or byte patching.
