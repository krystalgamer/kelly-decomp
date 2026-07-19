# __cl__22slf_unsuspend_all_ai_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031E370`
- Size: `0x20` (32 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.625 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a helper-symbol, independent-store, or call-delay scheduling mismatch.

### Attempt 2 notes

A symbol-preserving script operator uses the released `SLF_DONE` form after calling the static AI disable-stack pop helper.

## Outcome

The unsuspend-all-AI script operator matched exactly.
