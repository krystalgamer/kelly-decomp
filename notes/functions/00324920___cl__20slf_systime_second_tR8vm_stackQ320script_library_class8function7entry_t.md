# __cl__20slf_systime_second_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00324920`
- Size: `0x15C` (348 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `slf_systime_second_t` class body through its released headers. The isolated compiler could not resolve those released-tree relative include paths, so compilation failed before emitting an object. No retry or source variant was attempted.

## Outcome

The exact released system-second script operator failed the isolated compile because released header paths were unavailable; the sole attempt scored 0%.
