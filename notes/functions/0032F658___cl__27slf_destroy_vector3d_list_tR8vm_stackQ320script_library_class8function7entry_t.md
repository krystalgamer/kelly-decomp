# __cl__27slf_destroy_vector3d_list_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032F658`
- Size: `0x2C` (44 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS` and `SLF_DONE` body pops the four-byte vector3d-list handle and calls the symbol-preserved destroy helper.

## Outcome

The released vector3d-list destroy SLF matched exactly on the first attempt.
