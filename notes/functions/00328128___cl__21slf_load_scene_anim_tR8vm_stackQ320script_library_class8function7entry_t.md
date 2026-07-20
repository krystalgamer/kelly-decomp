# __cl__21slf_load_scene_anim_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00328128`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_scene_anim.cpp`
- Reference source: `KS/SRC/script_lib_scene_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released SLF_PARMS pop, world singleton access, scene-animation name dereference, and SLF_DONE return matched exactly while preserving the released SLF macros.

## Outcome

The released load_scene_anim script function matched exactly on the first attempt.
