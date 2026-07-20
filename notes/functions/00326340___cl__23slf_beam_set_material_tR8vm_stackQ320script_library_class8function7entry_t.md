# __cl__23slf_beam_set_material_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00326340`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_beam.cpp`
- Reference source: `KS/SRC/script_lib_beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS`/`SLF_DONE` body pops a beam and string pointer, dereferences the material string, and calls `set_texture`.

## Outcome

The released beam-material SLF matched exactly on the first attempt.
