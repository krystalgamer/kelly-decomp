# __cl__22slf_globalize_thread_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031E240`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 75.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released body optionally removes the current thread from its local region, then executes one shared `SLF_DONE`. The empty barrier preserves the normal optional call path.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released globalize-thread SLF matched exactly on attempt two.
