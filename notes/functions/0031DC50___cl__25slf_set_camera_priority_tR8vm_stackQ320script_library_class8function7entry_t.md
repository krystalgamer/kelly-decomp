# __cl__25slf_set_camera_priority_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031DC50`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS`/`SLF_DONE` body pops one numeric parameter, fetches the thread at stack offset 0xc, and calls `set_camera_priority`.

## Outcome

The released camera-priority SLF matched exactly on the first attempt.
