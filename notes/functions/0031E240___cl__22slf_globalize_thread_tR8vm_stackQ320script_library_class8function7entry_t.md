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

The released body reads the current thread and local region through shared VM
declarations, then optionally removes the thread.

## Outcome

A local `remove_local_thread` call pointer preserves the optional normal call
without a compiler barrier.
