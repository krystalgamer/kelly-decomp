# __cl__20slf_suspend_all_ai_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031E2E0`
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

The first wrapper declared the helper as a free function, leaving a relocation against `push_disable_all__Fb` instead of the static `ai_interface` method.

### Attempt 2 notes

The shared script-function and `ai_interface` declarations use the released
`SLF_DONE` form after calling the static disable-stack helper.

## Outcome

The exact script operator matches without a C-style symbol wrapper.
