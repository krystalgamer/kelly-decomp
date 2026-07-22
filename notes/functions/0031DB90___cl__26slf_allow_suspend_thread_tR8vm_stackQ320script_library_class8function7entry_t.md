# __cl__26slf_allow_suspend_thread_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031DB90`
- Size: `0x4C` (76 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used immutable `script_lib.cpp:68-84`, preserved `SLF_PARMS` and `SLF_DONE`,
and extended the shared vm stack/thread declarations with the released thread
accessor and suspendable setter.

## Outcome

Matched parameter popping, numeric-to-bool conversion, thread update, and SLF
completion byte-for-byte.
