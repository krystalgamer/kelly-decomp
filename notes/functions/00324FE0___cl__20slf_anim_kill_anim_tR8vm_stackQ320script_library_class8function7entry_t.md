# __cl__20slf_anim_kill_anim_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00324FE0`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_anim.cpp`
- Reference source: `KS/SRC/script_lib_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released parameter pop, world access, and animation load use the shared
animation SLF declaration.

## Outcome

The duplicate local class was removed; the released wrapper remains exact.
