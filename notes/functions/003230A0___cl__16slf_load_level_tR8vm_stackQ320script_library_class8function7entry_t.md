# __cl__16slf_load_level_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003230A0`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF_PARMS pop, game singleton access, level-name dereference, and SLF_DONE return matched exactly while preserving the released SLF macros. The singleton alias is HI16-adjusted for the real 0x0045ac64 global.

## Outcome

The released load_level script function matched exactly on the first attempt.
