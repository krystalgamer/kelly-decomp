# __cl__16slf_anim_pause_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00324B60`
- Size: `0x44` (68 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_anim.cpp`
- Reference source: `KS/SRC/script_lib_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 98.5294 | 94.1176 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Restored the released nested entry type, then the originating animation interface layout with its vptr at +4. The exact SLF parameter pop and ANIM_SUSPENDED call then matched.

## Outcome

The released animation pause script function matches exactly.
