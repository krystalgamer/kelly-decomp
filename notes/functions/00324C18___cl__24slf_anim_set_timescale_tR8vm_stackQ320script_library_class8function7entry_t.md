# __cl__24slf_anim_set_timescale_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00324C18`
- Size: `0x48` (72 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_anim.cpp`
- Reference source: `KS/SRC/script_lib_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released `SLF_PARMS` body, original `vm_anim_t`/`vm_num_t` types, and nonnegative ternary match exactly against the shared animation and VM-stack declarations. The shared declaration also consolidates the existing pause and kill-animation selectors; modeling the released `entity_anim_tree : entity_anim` inheritance places the derived vptr at +4 and preserves those prior matches.

## Outcome

The released animation timescale script function matches exactly using shared original-style VM stack and animation declarations.
