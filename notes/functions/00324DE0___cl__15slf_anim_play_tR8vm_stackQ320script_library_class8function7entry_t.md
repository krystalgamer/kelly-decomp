# __cl__15slf_anim_play_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00324DE0`
- Size: `0x54` (84 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_anim.cpp`
- Reference source: `KS/SRC/script_lib_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 82.1429 | 61.9048 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released anim play operator, parameter layout, ANIM_SUSPENDED value, entity_anim_tree vptr/clear_flag slot, and attach helper. The released operations matched byte-exactly.

### Attempt 3 notes

Read the exact released anim play operator, parameter layout, ANIM_SUSPENDED value, shared entity_anim_tree declaration, vptr/clear_flag slot, and attach helper. Kept repeated parameter loads while using a separate layout view to avoid redeclaring the shared class; attempt 3 matched byte-exactly.

## Outcome

Matched released slf_anim_play operator
