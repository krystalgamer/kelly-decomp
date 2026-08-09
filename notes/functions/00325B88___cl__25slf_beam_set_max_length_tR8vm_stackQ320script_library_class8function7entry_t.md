# __cl__25slf_beam_set_max_length_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00325B88`
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

The shared beam SLF declaration pops a beam pointer and float, then calls
`set_max_length`.

## Outcome

The local stack and beam declarations were removed; the released wrapper
remains exact.
