# __cl__22slf_beam_set_uv_anim_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00326200`
- Size: `0x3C` (60 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_beam.cpp`
- Reference source: `KS/SRC/script_lib_beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.1875 | 62.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF body and stack temporary were recovered, but an implicit vector2d assignment became a 64-bit unaligned copy.

### Attempt 2 notes

The released vector2d fieldwise assignment semantics preserve SLF_PARMS/SLF_DONE and reproduce both UV float stores exactly.

## Outcome

The released SLF parameter pop, vector2d construction, and beam UV field assignment match exactly.
