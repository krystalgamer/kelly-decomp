# __cl__16slf_play_movie_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00323148`
- Size: `0x44` (68 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt one used the released body but abbreviated the nested entry type. Restoring script_library_class::function::entry_t reproduced the exact symbol and all released SLF_PARMS/SLF_DONE behavior.

## Outcome

The released play-movie script function matches exactly.
