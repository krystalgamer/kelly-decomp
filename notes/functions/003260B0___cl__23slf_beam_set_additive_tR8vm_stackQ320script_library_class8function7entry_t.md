# __cl__23slf_beam_set_additive_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003260B0`
- Size: `0x38` (56 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_beam.cpp`
- Reference source: `KS/SRC/script_lib_beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF pops its eight-byte parameter block, converts the numeric argument to a boolean, and stores the inline beam additive flag. The original SLF_PARMS/SLF_DONE form and recovered offset match exactly.

## Outcome

The original beam additive SLF matches exactly while preserving SLF_PARMS and SLF_DONE and the inline boolean setter.
