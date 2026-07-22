# handler_endimage__Fi

- Address: `0x003888C8`
- Size: `0x48` (72 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 41.6667 | 22.2222 | `candidate.cpp` |
| 3 | different | 61.1111 | 44.4444 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 35.5263 | 21.0526 | `candidate.cpp` |

### Attempt 1 notes

Attempted the exact released body with the original `<eekernel.h>` SDK context, but that proprietary header is unavailable locally.

### Attempt 2 notes

Declaring ExitHandler as an external function emitted a call rather than the SDK macro inline sequence.

### Attempt 3 notes

An empty inline source substitute preserved surrounding C++ behavior but necessarily omitted the target SDK sync/ei operations.

### Attempt 4 notes

A compiler-builtin spelling for the SDK operation is not supported by the available compiler.

### Attempt 5 notes

A function-pointer form also emitted a call. The function is deferred because the exact released SDK macro body is unavailable and source-only rules forbid reconstructing its instructions manually.

## Outcome

The released handler depends on the unavailable PS2 SDK ExitHandler macro; source-only alternatives cannot reproduce its inline sync/ei sequence.
